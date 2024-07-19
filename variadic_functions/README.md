# Variadic functions and `const` type

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with variadic functions and the `const`type qualifier.

Note : I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [Variadic functions and `const` type](#variadic-functions-and-const-type)
	- [Summary](#summary)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [What are Macros?](#what-are-macros)
		- [How to create a Macro?](#how-to-create-a-macro)
		- [Different types of Macro](#different-types-of-macro)
	- [Variadic Functions](#variadic-functions)
		- [What is `va_list` and its macros?](#what-is-va_list-and-its-macros)
		- [And so, how to use a variadic function?](#and-so-how-to-use-a-variadic-function)
	- [`const` Type Qualifier](#const-type-qualifier)
		- [Constant Variables](#constant-variables)
		- [Pointer to Constant Variable](#pointer-to-constant-variable)
		- [Constant Pointer to Variable](#constant-pointer-to-variable)
		- [Constant Pointer to Constant](#constant-pointer-to-constant)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary (in alphabetical order)

**C**

  - **Chain Macros:** Macros that reference other macros within their definition.
  
  - **`const`:** Keyword to specify that a variable is constant and cannot be changed 
  
  - **Constant Pointer to Constant:** A pointer that  the adress can't be changed nor the value it points too.
  
  - **Constant Pointer to Variable:** A pointer that the adress can't be changed but the value stores inside can.
  
  - **Constant Variables:** Variables declared with `const` that can't be modified after initialization.  

**F**  

  - **Function-Like Macros:** Macros that take arguments and act like functions

**M**

  - **Macro:** a **macro** is a piece of code in a program that is replaced by the value of the **macro**.
  
  - **Multi-Line Macros:** Macros that span multiple lines, typically defined with a backslash (\) to indicate continuation.

**O**  

  - **Object-Like Macros:**  Macros that replace a simple element like a variable or number. 

**P**  

  - **Parameters:** Values passed to function-like macros for them to operate on.

  - **Pointer to Constant Variable:** A pointer that can point to different adresses but the value stores inside this adress can't be changed 

**V**

  - **`va_arg`:** Function **macro** - Go to the next variadic function argument EACH TIME it's used.

  - **`va_copy`:** Function **macro** - Makes a copy of the content of a `va_list` to another.

  - **`va_end`:** Function **macro** - Free a va_list

  - **`va_list`:** Type for iterating arguments

  - **`va_start`:** Function **macro** -  enables access to variadic functions arguments

  - **Variadic Functions:** Functions that accept an indefinite numbers of arguments, enabled by macros defined in `<stdarg.h>`.

## What are Macros?

We already encounter some **macros** like **`NULL`** (used everywhere) or **`EXIT_FAILURE`** and **`EXIT_SUCCESS`** in [argc_arv](https:/**github.com/ArcturusSky/holbertonschool-low_level_programming/blob/main/argc_argv/README.md#macros). But what is a **macro** exactly and why use it?

**Definition:**

A **macro** is a **piece of code** in a program that is replaced by the **value of the macro** define by `#define` directive. In simple terms, whenever the compiler encounter a **macro** it will replace that name by the code defined in the **macro**'s definition. **Macros** are handled by the preprocessor, which runs before the actual compilation process.

**Why use it?** 

**Advantages:**
  
  - **Increased productivity:** They save time and reduce errors by automating repetitive tasks.

  - **Customization:** You can create your own tailored to your own needs, they can even take arguments.
  
  - **Consistency:** Since they are predetermined, they will always behaved as expected.
  
  - **Efficiency:** They are expanded inline, which can sometimes make the code faster, though it can also lead to code bloat.
  
  - **Easy:** It's very simple to create and use.

**Disadvantages:**

  - **Security risks:** If not implemented correctly, **macros** can potentially create security vulnerabilities. For example, a **macro** without proper parentheses can lead to unexpected behavior.
  
  - **Limited functionality:** While they can do many things, they are not suitable for complex tasks.
  
  - **Maintenance:** They may need maintenance and updates regarding the evolution of your code and technologies. Since **macros** are text replacements, changes to them can have wide-reaching impacts on the codebase.
  
  - **Dependence:** Overusing macros can lead to a dependency on them, reducing code readability and making it harder to follow program logic.

### How to create a Macro?

It's simple you just have to pur `#define` directive followed by your **macro** definition.

*Example of simple definition:*

```c
#include <stdio.h>
 
/** Macro definition */
#define LIMIT 5
 
int main(void)
{
    /** Print the value of macro defined */
    printf("The value of LIMIT is %d", LIMIT);

    return (0);
}

/** Output : The value of LIMIT is 5 */
```

*Example of more complex definition*

```c
#include <stdio.h>
 
/** Macro definition */
#define AREA(L, b) ((L) * (b))
 
int main(void)
{
    /** Given lengths L1 and L2 */
    int L1 = 10, L2 = 5, area;
 
    /** Find the area using **macros** */
    area = AREA(L1, L2);
 
    /** Print the area */
    printf("Area of rectangle is: %d", area);
 
    return (0);
}

/** Output: Area of rectangle is: 50 */
```

*Explanations:*

We can see here that the **macro** `AREA` takes two parameters `(L, b)` and then applies `((L) * (b))` Note the use of parentheses to ensure correct order of operations.

### Different types of Macro

  1. **Object-Like Macros**
   
	It's a **macro** used to replace an **object**. Which means a simple element. Like a variable, a number or a string.

*Example:*

```c
#include <stdio.h>
 
/** Macro definition */
#define FAVNUMBER 15
 
int main(void)
{
    /** Print the message */
    printf("My favorite number is %d.", FAVNUMBER);
 
    return (0);
}

/** Output: My favorite number is 15. */
```

  2. **Chain Macros**

It's simple a **macro** inside another **macro**. In **chained macro** the parent is exepended firt then the second. (Like a a chest drawer. You open the chest drawer first then the drawer)

*Example:*

```c
#include <stdio.h>
  
/** Macro definition */
#define TWITTER FOLLOWERS
#define FOLLOWERS 493
  
int main(void)
{
    /** Print the message */
	printf("Holberton School France has %d followers on Twitter", TWITTER);
  
    return (0);
}

/** Output: Holberton School France have 493 followers on Twitter */
```

  3. **Multi-Line Macros**

It's like an **Object-like** **macro** but with multiple lines. To create a multi-line **macro** you have to use the backslash `\` to indicate that the macro continues on the next line. They are particularly useful for initializing arrays of defeining complex constants. They allow you to defin a block of code that can be reused throughout your program, making your code mire readable and maintainable.

*Example:*

```c
#include <stdio.h>
 
/** Multi-line Macro definition */
#define ELE 1, \
            2, \
            3
 
int main(void)
{
 
    /** Array arr[] with elements defined in macros */
    int arr[] = { ELE };
 
    /** Print elements */
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) 
	{
        printf("%d  ", arr[i]);
    }
    return (0);
}

/** 
 * Output: Elements of Array are:
 * 1 2 3
 */
```

  4. **Function-Like Macros**

As seen in the 2nd example in the **macro**'s definition, **Macros** can act the same way as function calls. The name will replace the whole code. 

**WARNING:** for the **macro** to work well it's **mandatory** to put `()` right after its name, without any space. These parenthesis will hold the parameters. And then with a space and another `()` will hold the code of what the function does. 

*Simple example:*

```c
#include <stdio.h>

/** Macro definition */
#define AREA(L, b) ((L) * (b))

int main(void)
{
	/** Given lengths L1 and L2 */
	int L1 = 10, L2 = 5, area;

	/** Find the area using macros */
	area = AREA(L1, L2);

	/** Print the area */
	printf("Area of rectangle is: %d", area);

	return (0);
}

/** Output: Area of rectangle is: 50 */
```

*More complex example:*

```c
#include <stdio.h>
 
/** Function-like Macro definition */
#define min(a, b) (((a) < (b)) ? (a) : (b))
 
int main(void)
{
 
    /** Given two number a and b */
    int a = 15;
    int b = 89;
	
	/** Print the minimum value between the two */
	printf("Minimum value between %d and %d is %d\n", a, b, min(a, b));
 
    return (0);
}

/**Output: Minimum value between 15 and 89 is 15 */
```

*Example combining object-like and function-like **macros**:*

```c
#include <stdio.h>

/** Object-like macro definition*/
#define  PI  3.1416
/** Function-like macro definition */
#define  AREA(r)  (PI*(r)*(r))
 
int main(void) 
{
	/** Radius of the circle */
      float r = 7;
       
    printf("Area of Circle with radius %.0f: %.3f", r, AREA(r));
    return (0);
}

/** Output: Area of Circle with radius 7: 153.938 */
```

## Variadic Functions

**Definition:** 

**Variadic functions** are functions that accept an indefenite number of arguments. **Macros** defined in the `<stdarg.h>` header are mandatory to use them. The most common example of a variadic function is `printf` since you can print an undefined amount of items.

**Why using it?:**

**Variadic functions** enables flexibilitiy in your code. Without them you would be restrained to always knowing the number of arguments for each function. This can be fine in small codebases, but in larger ones, it becomes very rigid.

Once again, imagine the `printf` function. If it wasn't a variadic function you would have to declare each time a certain amount of parameter to be printed no more no less. It would be dreadful, wouldn't it?

Before explaning **HOW do we use**, declare, define a variadic function. We need to understand its mandatory **macros** used inside.

### What is `va_list` and its macros?

**Definition:**

`va_list` is a specific type define in `stdarg.h` used exclusively for **variadic functions**. It is used to declare a variable that will store the information necessary to access the additional arguments passed to your variadic function.

In simpler terms, it provides a way for your function to iterate through its given arguments, such as using loops.

**How to use `va_list` and its macros, step by step**

As already said, the first thing to do is to include the header `<stdarg.h>`.
Then using `va_list` and all its macro one by one.

  1. Declare a `va_list` variable:

This variable will be used to access the variable arguments. (it will hold them)

```c
va_list example_va_list_name;
```

  2. Initialize the `va_list` variable with `va_start`:

	This **macro** initilizes the `va_list` variable to point to the first argument in the variable argument list.

	It takes two **parameters**: the `va_list` variable and the name of the last known fixed argument (which means the last parameter before the `...`)

```c
va_start(example_va_list_name, last_known_argument_name);
```

  3. Accessing each arguments using `va_arg`:
   
This **macro** accessed to the next argument in the list.

It takes two **parameters**: the `va_list` variable and the type of the next argument.

**WARNING:** `va_arg` go to the next argument EACH time it's been used. So if in a loop you want to test an element and if not printing that element by calling "va_arg" twice to do "if va arg(example) ==" else "printf(va_arg(exemple))" it will move to one argument EACH time.

**Tips:** stop va_arg element you want in a temporary variable

```c
type argument = va_arg(example_va_list_name, type);
```

  1. Clean up with `va_end`:

This **macro** cleans up the `va_list` variabl. It should be called **before** the function returns.

```c
va_end(example_va_list_name);
```

### And so, how to use a variadic function?

**variadic function** takes at **least** one fixed argument (which will give the **data type** of the argument and a **name**) and then any number of arguments can be passed with an **ellipsis** `...` as last parameters.

As we always do with Holberton. We declare a **prototype** first (in your `main.h` or any required header) in that way your **variadic function** can be used anywhere.

*Template/Prototype to put in your header:*

```c
Data_ReturnType function_name (data_type variable_name, ...);
/** This variadic function is used to blablabla */
```

*Example (part 1):*

```c
void addNumbers(int n, ...);
/** This variadic function that add all numbers given to it. */
```

Then definition of the variadic function (in its own file or else). So what exactly this function do. As we already did in previous tasks.

*Example (part 2):*

```c
#include <stdarg.h> /** Required for using variadic functions */
#include <stdio.h>

/**
 * AddNumbers - This variadic function add all numbers.
 * @n: given integer to print
 *
 * Return: Sum the result of the addition
 */

int AddNumbers(int number_of_arg, ...)
{
	int Sum = 0;
	int index = 0;

	/** Declaring a variable of type "va_list"*/
	va_list NumToAdd;

	/** Initializing argument to the list*/
	va_start(NumToAdd, number_of_arg);
 
    for (index = 0; index < number_of_arg; index++) /** Go through all the arguments in the list through a loop as we would do for an array or else */
 
		/** Accessing current variable look for the next "int" inside so the next argument. and "Sum +=" is a shorthand for "Sum = Sum + ..."  */
		Sum += va_arg(NumToAdd, int);

	/** Ending argument list traversal */
	va_end(NumToAdd);

    return (Sum);
}

/** Output: No input yet, it return just the Sum in 'return' */
```

And then your variadic functions is being used in any given code for any reason.

*Example (part 3):*

```c
#include <stdarg.h>
#include <stdio.h>

int main(void)
{
    printf("\n\n Variadic functions: \n");
 
    /** Variable number of arguments */
    printf("\n 1 + 2 = %d ",
           AddNumbers(2, 1, 2));
 
    printf("\n 3 + 4 + 5 = %d ",
           AddNumbers(3, 3, 4, 5));
 
    printf("\n 6 + 7 + 8 + 9 = %d ",
           AddNumbers(4, 6, 7, 8, 9));
 
    printf("\n");
 
    return (0);
}

/** Output:
 * 
 * Variadic functions:
 *
 *  1 + 2 = 3 
 *  3 + 4 + 5 = 12 
 *  6 + 7 + 8 + 9 = 30
 */
```


## `const` Type Qualifier

**Definition:**

**`const`** is a keyword that can be applied to the declaration of any variable to specifiy that its value can't be changed anymore. 

**Why use it?**

The `const` qualifier in C is a good practice when we want to ensure that some values should remain **constant** and not being changed by accident.

**Advantages:**

  - **Improved code readability:** By specifiying that a variable can't be changed in our code it shows to other developpers that this one mustn't be changed which helps to provide a clearer and simpler code to read.
  
  - **Enhanced type safety:** By using `const` you can ensure that values are not accidentally modified, reducing the riks of bugs and errors.
  
  - **Improved optimization:** Since compilers know that the const variable won't changed they don't have to calculate it anymore and it result in faster execution.
  
  - **Better memory usage:** By creating a const variable, we can often avoid making copy of this value and then reducing the amoung of memory used.
  
  - **Improved compatibility:** By declaring variables as `const` we can make our code more compatible with other libraries and API's that use `const` variables.
  
  - **Improved reliability:** By using `const`, we can make our code more reliable. It will be more stable for any kind of projects if the variables can't be changed.   

### Constant Variables 

**Definition:**

In this case the `const` qualifier is used to declare a variable. The value of this variable cannot be modificed once it's initialized.

Trying to change it will end in a compilation error.

**Usage:**

Enable to keep a variable untouched.

*Example:*

```c
#include <stdio.h>
 
int main()
{
    const int var_example = 5;
 
    /** "Compilation error: assignment of read-only variable 'var_example'" */
    var = 200;
 
    return (0);
}
```

### Pointer to Constant Variable

In the **pointer to constant** the data pointed by the pointer is **constant** and cannot be changed. However, the **pointer** itself can change and poins to somewhere else. (since a pointer is a **special type of variable as we have already seen [here](https://github.com/ArcturusSky/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/README.md#pointers)**)

*Example:*

```c
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	/** Declare a pointer to a "constant integer" */
	const int *pointer_example = &a;

	/** Print the value of 'a' using the pointer */
	printf("Value of a: %d\n", *pointer_example);

	/** Attempt to modify the value pointed to by 'pointer_example' */
	*pointer_example = 15; 
	/** This will cause a compilation error */

	/** Change the pointer to point to 'b' */
	pointer_example = &b;

	/** Print the value of 'b' using the pointer */
	printf("Value of b: %d\n", *pointer_example);

	return (0);
}

```


### Constant Pointer to Variable

On the contrary of **Pointer to Constant Variable** here the `const` keyword makes the pointer itself constant, not the variable. Meaning it cannot point to a different memory location after initialization. However, the value at the memory location it points to can be changed.

*Analogy:*

See it as a mail box. The mail box is our pointer. Your mailbox is fixed to your house, to your adress. And can't be changed where it has been installed. But you can put anything inside, mail, packages etc.

*Example:*

```c
#include <stdio.h>

int main() 
{
	int a = 90;
	int b = 50;

	/** Declare a constant pointer to an integer */
	int *const pointer_example = &a;

	/** Print the value and address of 'a' using the pointer */
	printf("Value of a: %d\n", *pointer_example);
	printf("Address of pointer_example: %p\n", (void*)pointer_example);

	/** Modify the value of 'a' through the pointer */
	*pointer_example = 56;

	/** Print the new value of 'a' */
	printf("New value of a: %d\n", *pointer_example);
	printf("Address of pointer_example: %p\n", (void*)pointer_example);

	/** Attempt to change the address the pointer is pointing to */
	pointer_example = &b; /** This will cause a compilation error */

	return (0);
}
```

### Constant Pointer to Constant

In this case it's simple. Nor the value pointed by the pointer or the adress pointed by the pointer or the pointer itself can be changed.

```c
#include <stdio.h>

int main() 
{
    const int a = 50;
    const int b = 90;

    /** Declare a constant pointer to a constant integer */
    const int *const pointer_example = &a;

    /** Print the address and value of 'a' using the pointer */
    printf("Address of pointer_example: %p\n", (void*)pointer_example);
    printf("Value of a: %d\n", *pointer_example);

    /** Attempt to modify the value through the pointer */
    *pointer_example = 90; 
	/** This will cause a compilation error */

    /** Attempt to change the address the pointer is pointing to */
    pointer_example = &b; 
	/** This will cause a compilation error */

    return (0);
}
```

## Conclusion

To conclude each of theses concepts are essential to build larger and more complex codes. **Macros** are powerful tool to simplify and automating recuring actions. **Variadic functions** are crucial to permit an undefinite amount of parameters given in Input and `const` are crucial to stabilized and ensure that the code won't be altered for key values. Mastering these three concepts will be useful not only in C but also in other languages.

## Author

Anne-Cécile Besse (Arc)