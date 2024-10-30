# Pointers, Arrays and Strings

This repository is part of the `low-programming` parent repository focused on C programming. This repository is dedicated to mastering key concepts in C: **POINTERS**, **ARRAYS** and **STRINGS**. Understanding these fundamental concepts is crucial for writing efficient and effective code in C. Without that you can't properly understand your code. This repository will also hold all the tasks I had to do regarding pointers, arrays and strings.

## Summary

- [Pointers, Arrays and Strings](#pointers-arrays-and-strings)
  - [Summary](#summary)
  - [Glossary](#glossary)
  - [Pointers](#pointers)
    - [Why using pointers?:](#why-using-pointers)
    - [Key point: Passing by Value VS Passing by Reference](#key-point-passing-by-value-vs-passing-by-reference)
    - [How to Use Pointers?](#how-to-use-pointers)
  - [Arrays](#arrays)
  - [Strings](#strings)
  - [Conclusion](#conclusion)
  - [Author](#author)

## Glossary

 - **Array:** A collection of elements of the **same** type, stored in *contiguous memory locations*, accessible via **indices**.

- **Contiguous Memory:** Adjacent memory locations, often used to store *arrays* for efficient access.

- **Dereferencing:** The act of **accessing the value stored at the memory address** contained in a pointer, using the `*` operator.

- **Direct Access:** Using pointers to directly access a memory location, often to improve efficiency.

- **Dynamic Memory Allocation:** [See README.md dedicated to memory allocation](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/malloc_free/README.md).

- **Iteration:** The process of sequentially traversing the elements of an array or a string. (aka looping)

- **Memory Address:** A specified location in memory where data is stored, accessible using pointers.

- **Modification by Reference:** The ability of a function to modify a variable by using a pointer to that variable.

- **Null Byte:** A special character in C used to indicate the end of a string of characters `'\0'`.

- **Null Pointer:** A special pointer value (NULL in C) that indicates the pointer does not point to any valid memory location.

- **Passing a Pointer:** Transmitting the memory address of a variable to a function, allowing the function to modify the variable directly.

- **Passing by Reference:** A method of passing arguments to a function by providing the memory address (pointer) of the variable, enabling direct modification.

- **Passing by Value:** A method of passing arguments to a function by providing a **copy** of the variable's value, preventing direct modification.

- **Pointer Arithmetic:** Operations that involve manipulating pointers to navigate through memory, *such as incrementing a pointer to access the next element in an array.*

- **Pointers:** A variable that stores the memory address of another variable, allowing direct access to the value stored at that address.

- **String:** A sequence of characters terminated by a **null character (`'\0'`)**, often implemented as an *array* of `char`.
  

## Pointers

**Definition:** A pointer is a **special variable** that stores the memory address of another variable. 
Instead of holding a typical data value, a pointer holds the location of where that data value resides in memory.
This allows direct access to the variable's value by referencing its memory address

### Why using pointers?:

**Efficiency:** Pointers allows direct and efficient manipulation of arrays and strings by accessing their value directly through their memory address. Which means that it will lead to faster read and write operation compared to accessing array elements through index calculations.

**Dynamic memory allocation:** Pointers facilitate the dynamic memory allocation, allowing a flexible and efficient use of the memory. This is crucial for managing structures of data such as variable length arrays and complex structure [See README.md dedicated to memory allocation](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/malloc_free/README.md)

**Function argument passing:** Pointers allow functions to modify variables outside their scope (outside of their code) and efficiently pass large data structures. Instead of copying the data directly in the code, passing a pointer to  the data is more efficient.

**Data structures:** Pointers are essential for creating complex data structures such as linked lists, trees, and graphs, by enabling efficient links between data elements.

### Key point: Passing by Value VS Passing by Reference

"Passing" means giving a data to a variable. And there is two ways very different to do it. 

- **Passing by Value:**
  
	Passing by "value" means that in our code when we give an [argument](https://github.com/ArcturusSky/holbertonschool-low_level_programming/blob/main/argc_argv/README.md)  to a function by just using its name (for example "num") it will create a COPY of it and only this copy will be altered. So if you go back to the main function (for example if you are using [recursion](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/recursion/README.md)) only the copy would have been altered and using the variable name again will lead only to the use of the original value and not the altered one.

*Example:*

```c
#include <stdio.h>

void incrementByValue(int x) {
    x = x + 1; /** Modify only the local COPY of x */
}

int main() {
    int num = 10;
    incrementByValue(num); /** Pass a COPY of "num" to the "incrementByValue"*/
    printf("%d\n", num); /** Print "10" because "num" hasn't been altered. */
    return 0;
}
```

- **Passing by Reference (passing by a pointer)**
	
	In contrast to what was previously said, when passing by REFERENCE (which means **passing by a pointer**) the argument passed is a pointer TO the variable. So the value altered won't be a copy of the value but the original value itself through its memory address.

	*Example:*

```c
#include <stdio.h>

void incrementByReference(int *x) {
    *x = *x + 1; /** Modify the value POINTED by x */
}

int main() {
    int num = 10;
    incrementByReference(&num); /** Pass the address of "num" to the function "incrementByReference */
    printf("%d\n", num); /** Print "11" because "num" has been altered through its memory address. */
    return 0;
}
```

**Conclusion**

Understanding the distinction between **passing by value** and **passing by reference (via pointers)** is crucial.

- **Passing by value** involves creating a copy of the variable, allowing functions to work with a local copy without affecting the original variable outside the function scope

- **Passing by reference** via pointers enables functions to directly access and modify the original variable's value by passing its memory address. 

Mastering when to use each method ensures efficient and effective programming, particularly when dealing with large data sets or complex algorithms.

### How to Use Pointers?

**1. Declaration:**

To declare a pointer, prepend `*` before the pointer's name.

  - **Template:**

```c
type_of_data *example_pointer_name;
```

  - **Example:**

```c
int *example_pointer_name; /** Declare a pointer to an int */
```

**2. Initialization:**

Initializing a pointer by assigning it the memory address of an existing variable with the **address of operator `&`**

  - **Template:**
  
```c
example_pointer_name = &example_variable_name;
```
 - **Example:**

```c
int example_variable_name = 10; /** Declare int variable */
int *example_pointer_name; /** Declare a pointer to an int */
example_pointer_name = &example_variable_name; /** Initialize pointer with the address of the variable. */
```

**3. Accessing the pointed value**

Using the **dereferencing operator `*`** (yes it's the same as in declaration) to access the value (of the variable) stored at the memory address pointed by the pointer.

  - **Template:** 

```c
value_pointed = *example_pointer_name
```

  - **Example:**

```c
int example_variable_name = 10; /** Declare int variable */
int *example_pointer_name; /** Declare pointer to an int */
example_pointer_name = &example_variable_name; /** Initialize pointer with the address of the variable. */
int value_pointed = *example_pointer_name; /** "value_pointed" now stores the same value as "example_variable_name" since it was the variable pointed by "example_pointer_name" */
```

**4. Modifying the pointed value**

Using again the **dereferencing operator `*`** which, as we previously saw, give access to the pointed value. And so we can now modify it just by changing the placement of the pointer in the line of code.

  - **Template:** 

```c
*example_pointer_name = new_value;
```

  - **Example:**

```c
*example_pointer_name = 20; /** Modify the value pointed by "example_pointer_name" to "20" */
```

**5. Using pointers in functions**

Pointers are commonly used to **pass parameters** to functions to allowed modifying variables outside of their scope. It the **passing by Reference** we've seen earlier.
	
  - **Example:**

```c
#include <stdio.h>

void incrementByReference(int *x) {
	*x = *x + 1; /** Modify the value POINTED by x */
}

int main() {
	int num = 10;
	incrementByReference(&num); /** Pass the address of "num" to the function "incrementByReference */
	printf("%d\n", num); /** Print "11" because "num" has been altered through its memory address. */
	return 0;
}
```

**6. (advanced) Managing dynamic memory allocation**

This part is especially covered [here](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/malloc_free#readme)
but in short : Using function `malloc`, `calloc`and free to allocate memory dynamically. Especially useful for **arrays** of different length and complex data structure

## Arrays

  - **Definition:**

  An array in C is a collection of elements of the same data type stored in contiguous memory locations. Each element is accessed by its index.

  - **Declaration and Initialization:**

```c
int numbers[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of 5 integers
```

  - **Accessing Elements:**

```c
int third_element = numbers[2]; // Access the third element (index 2)
```

  - **Modifying Elements:**

```c
numbers[1] = 10; // Change the second element to 10
```

  - **Array and Pointers:**
  
Arrays are closely related to pointers. The name of an array is essentially a pointer to its first element.

```c
int *ptr = numbers; // ptr now points to the first element of numbers
```

  - **Iterating Through an Array:**

```c
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}
```

  - **Multi-dimensional Arrays:**

```c
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

Arrays are fundamental in C programming and are often used in conjunction with pointers for efficient data manipulation and storage.

## Strings

  - **Definition:**

  A string in C is a sequence of characters terminated by a "null character" `\0`. It is typically represented as an *array* of characters where the last element is `\0`, indicating the end of a string.

  - **Declaration and Initialization:**

```c
char greeting[] = "Hello"; // Implicitly adds '\0' at the end
char name[10] = "John"; // Explicitly allocate space for 10 characters
```

  - **Accessing Characters:**

```c
char first_char = greeting[0]; // Access the first character
```

  - **String Functions:**

C provides several functions for string manipulation in the `<string.h>` library:

```c
#include <string.h>

char str1[20] = "Hello";
char str2[20] = "World";

strlen(str1); // Returns the length of str1
strcpy(str2, str1); // Copies str1 into str2
strcat(str1, str2); // Concatenates str2 to the end of str1
strcmp(str1, str2); // Compares str1 and str2
```

  - **String Input/Output:**

```c
char input[100];
printf("Enter a string: ");
fgets(input, sizeof(input), stdin); // Safe way to read a string

printf("You entered: %s", input);
```

  - **String and Pointers:**

Strings can be manipulated using pointers, which is often more efficient:

```c
char *ptr = greeting;
while (*ptr != '\0') {
    printf("%c", *ptr);
    ptr++;
}
```

Understanding strings is crucial in C programming as they are used extensively for text processing and data manipulation.

## Conclusion

Pointers, arrays, and strings are fundamental concepts in C programming that are closely interrelated. Mastering these concepts is crucial for efficient memory management, data manipulation, and algorithm implementation.

- **Pointers** provide direct access to memory, enabling efficient data manipulation and dynamic memory allocation.
- **Arrays** offer a way to store multiple elements of the same type in contiguous memory locations, allowing for easy access and manipulation of data sets.
- **Strings** in C are essentially character arrays with special properties, widely used for text processing and data representation.

Understanding how these concepts interact is key to writing efficient and effective C programs. Pointers can be used to manipulate arrays and strings, arrays can be accessed using pointer arithmetic, and strings can be treated as special cases of character arrays.

Proficiency in these areas opens up possibilities for creating complex data structures, implementing efficient algorithms, and optimizing code performance. As you continue to work with C, you'll find that a solid grasp of pointers, arrays, and strings forms the foundation for tackling more advanced programming challenges.

Remember to always handle these powerful tools with care, especially when it comes to memory management and bounds checking, to ensure robust and secure code.

## Author

Anne-Cécile Besse (Arc)