# ARGC, ARGV, and Unused Variables

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with `argc` and `argv` for the first time. This repository will then contain the tasks I had to complete about these two parameters. It will also add a little part on "how to compile a file when a variable is unused inside it?"

## Summary

- [ARGC, ARGV, and Unused Variables](#argc-argv-and-unused-variables)
	- [Summary](#summary)
	- [Definition](#definition)
	- [How to use?](#how-to-use)
	- [Macros](#macros)
	- [How to compile a file when a variable is unused inside it](#how-to-compile-a-file-when-a-variable-is-unused-inside-it)
	- [Author](#author)

## Definition

`argc` and `argv` are two parameters used to handle and control programs, especially in relation to user input.

- `argc` stands for "arguments count". It counts every argument provided in the command line, including the program itself, and thus represents the size of the `argv` array.

- `argv` stands for "arguments vector". It's an array of strings where each element represents an argument passed to the program. The array includes a terminating `NULL` pointer, making its size equivalent to `argc`. The indices of `argv` start from 0, with `argv[0]` typically being the name or path of the program itself, and `argv[argc]` being `NULL`.

## How to use?

- **Declaration:**
To use `argc` and `argv` in your C program, declare your `main` function as follows:

```c
int main(int argc, char *argv[]) {
    // Your code here

    return EXIT_SUCCESS; // Return 0 if program executes successfully
}
```

- **Exemple usage in `main`function:**

```c
int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <argument>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Example: Print all arguments passed
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return EXIT_SUCCESS;
}
```

- **Explanation**

`argc`: Represents the number of command-line arguments passed to the program, including the program's name itself (`argv[0]`).

`argv`: An array of strings (char *argv[]) where each element is a command-line argument passed to the program. argv[0] typically contains the program's name, and subsequent elements (argv[1], argv[2], etc.) contain the actual arguments passed.

## Macros

When using `argc` and `argv`, it's common practice to utilize the macros `EXIT_FAILURE` and `EXIT_SUCCESS` to terminate programs. This approach is clearer than simply returning a numerical value.

## How to compile a file when a variable is unused inside it

If you want to compile a file with an unused variable inside you will have to indicate to the compiler that this variable has been unused on purpose. For that there is three differents technique:

- **1: Use the variable even for something unuseful**
		
		You can always use that variable in a uneventful loop. In the following exemple `argc` will always be higher than 0. It's just for using the variable :

	Exemple:
	
```c
		int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

return (EXIT_SUCCESS);
}
```

**- 2: __attribute__((unused))**

		Write `__attribute__ ((unused))` right before the declaration of your variable which will be unused and add  `unused_` as a prefix to you variable.
		
	Exemple:

```c
	int main(int argc, char *argv[])
{
    __attribute__((unused)) int unused_argc; // Declare argc as unused.

    if (argc > 0) {
        printf("%s\n", argv[0]);
    }

    return (EXIT_SUCCESS);
}
```
**- 3: (void)variable**
		
		If your variable has been declared in the prototype, or you just want to use another way to ignore an unused variable. You can just add line at the end of your program. This line is (void)name_of_your_variable. This way compiler will know that this variable should be ignore during the compilation.
	
	Exemple:

```c
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    printf("%s\n", argv[0]);

    (void)argc; // Cast argc to void to indicate it is unused

    return EXIT_SUCCESS;
}
```

## Author

Anne-Cécile Besse (Arc)
