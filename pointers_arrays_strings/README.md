# Pointers, Arrays and Strings


This repository is part of the `low-programming` parent repository focused on C programming. This repository us dedicated to mastering key concepts in C: **POINTERS**, **ARRAYS** and **STRINGS**. Understanding these fundamental concepts is crucial for  writing efficent and effective code in C. Without that you can't properly understand your code. This repository will also hold all the tasks I had to do regarding pointers, arrays and strings.

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

**Definition:** A pointer is a **special variable** that stores the memory adress of another variable. 
Instead of holding a typical data value, a pointer holds the location of where that data value resides in memory.
This allows direct access to the variable's value by referencing its memory adress

### Why using pointers?:

**Efficiency:** Pointers allows direct and efficent manipulation of arrays and strings by accessing their value directly trough their memory adress. Which means that it will lead to faster read and writ operation compared to accessing array elements through index calculations.

**Dynamic memory allocation:** Pointers facilitate the dynamic memory allocation, allowing a flexible and efficent use of the memory. This is crucial for managing structures of data such as variable lengh arrays and complex strucure [See README.md dedicated to memory allocation](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/malloc_free/README.md)

**Function argument passing:** Pointers allow functions to modify variables outside their scope (outside of their code) and efficiently pass large data structures. Instead of copying the data directcly in the code, passing a pointer to  the data is more efficent.

**Data structures:** Pointers are essential for creating complex data structures such as linked lists, trees, and graphs, by enabling efficent links between sata elements.

### Key point: Passing by Value VS Passing by Reference

"Passing" means giving a data to a variable. And there is two ways very different to do it. 

- **Passing by Value:**
  
	Passing by "value" means that in our code when we give an [argument](https://github.com/ArcturusSky/holbertonschool-low_level_programming/blob/main/argc_argv/README.md)  to a function by just using its name (for exemple "num") it will create a COPY of it and only this copy will be altered. So if you go back to the main function (for exemple if you are using [recursion](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/recursion/README.md)) only the copy would have been altered and using the variable name again will lead only to the use of the original value and not the altered one.

		*Exemple:*

````c
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
````

- **Passing by Reference (passing by a pointer)**
	
	In contrast to what was previously said, when passing by REFERENCE (which means **passing by a pointer**) the argument passed is a pointer TO the variable. So the value altered won't be a copy of the value but the original value itself through its memory adress.

	*Exemple:*

````c
#include <stdio.h>

void incrementByReference(int *x) {
    *x = *x + 1; /** Modify the value POINTED by x */
}

int main() {
    int num = 10;
    incrementByReference(&num); /** Pass the adress of "num" to the function "incrementByReference */
    printf("%d\n", num); /** Print "11" because "num" has been altered through its memory adress. */
    return 0;
}
````

**Conclusion**

Understanding the distinction between **passin by value** and **passing by reference (via pointers)** is crucial.

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

  - **Exemple:**

```c
int *example_pointer_name; /** Declare a pointer to an int */
``` 

**2. Initialization:**

Initializing a pointer by assigning it the memory adress of an existing variable with the **adress of operator `&`**

  - **Template:**
  
```c
example_pointer_name = &example_variable_name;
``` 
 - **Exemple:**

```c
int example_variable_name = 10; /** Declare int variable */
int *example_pointer_name; /** Declare a pointer to an int */
example_pointer_name = &example_variable_name; /** Initialize pointer with the adress of the variable. */

``` 

**3. Accessing the pointed value**

Using the **dereferencing operator `*`** (yes it's the same as in declaration) to access the value (of the variable) stored at the memory address pointed by the pointer.

  - **Template:** 

```c 
value_pointed = *example_pointer_name

``` 

  - **Exemple:**

````c
int example_variable_name = 10; /** Declare int variable */
int *example_pointer_name; /** Declare pointer to an int */
example_pointer_name = &example_variable_name; /** Initialize pointer with the adress of the variable. */
int value_pointed = *example_pointer_name; /** "value_pointed" now stores the same value as "example_variable_name" since it was the variable pointed by "example_pointer_name" */
```` 

**4. Modifing the pointed value**

Using again the **dereferencing operator `*`** which, as we previously saw, give access to the pointed value. And so we can now modify it just by changing the placement of the pointer in the line of code.

  - **Template:** 

```c 
*example_pointer_name = new_value;

``` 

  - **Exemple:**

```c
*example_pointer_name = 20; /** Modify the value pointed by "example_pointer_name" to "20" */
```

**5. Using pointers in functions**

Pointers are commonly used to **pass parameters** to functions to allowed modifying variables outside of their scope. It the **passing by Reference** we've seen earlier.
	
  - **Exemple:**

````c
#include <stdio.h>

void incrementByReference(int *x) {
	*x = *x + 1; /** Modify the value POINTED by x */
}

int main() {
	int num = 10;
	incrementByReference(&num); /** Pass the adress of "num" to the function "incrementByReference */
	printf("%d\n", num); /** Print "11" because "num" has been altered through its memory adress. */
	return 0;
}
```` 

**6. (advanced) Managing dynamic memory allocation**

This part is especially covered [here](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/malloc_free#readme)
but in short : Using function `malloc`, `calloc`and free to allocate memory dynamicaly. Especially useful for **arrays** of different lengh and complex data structure

## Arrays

  - **Définition:**

  An array in C, is a collection of elements of the same data type stored in contiguous memory location (they are next to each other). Each element is accessed by its index.

  **EN COURS DE REDACTION**

## Strings

  - **Définition:**

  A string in C, is a sequence of characters terminated by a "null character" `\0`. It is typically represented as an *array* of characters where the last element is `\0` , indicating the end of a string.

	**EN COURS DE REDACTION**

## Conclusion

**EN COURS DE REDACTION**

## Author

Anne-Cécile Besse (Arc)