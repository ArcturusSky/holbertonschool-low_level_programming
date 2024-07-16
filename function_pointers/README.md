This README.md will hold the template I use for every README.md for each sub-repository.

# Function pointers

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with **function_pointers**. 

Note : I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [Function pointers](#function-pointers)
	- [Summary](#summary)
	- [Glossary](#glossary)
	- [Why Not Just Use Direct Function Calls?](#why-not-just-use-direct-function-calls)
	- [Function Pointers](#function-pointers-1)
		- [What is it?](#what-is-it)
		- [How To Declare a Function Pointer](#how-to-declare-a-function-pointer)
		- [Initialisation and Use of a Function Pointer](#initialisation-and-use-of-a-function-pointer)
		- [Characteristics of Function Pointers](#characteristics-of-function-pointers)
		- [Example: Dynamic Function Selection](#example-dynamic-function-selection)
		- [Example: Callback](#example-callback)
		- [Example: Efficient Handling of Function Tables](#example-efficient-handling-of-function-tables)
	- [Functions Pointers and Structures](#functions-pointers-and-structures)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary

**A**

  - **Array of Function Pointers:** A collection of function pointers stored in an anrray. Used to call different functions based on the index. 

  - **Address-of Operator (&):** A unary operator in C that returns the memory address of its operand. Used to assign the address of a function to a function pointer. 
 
**C**

  - **Callback Function:** A function passed as an argument to another function, allowing the called function to execute the callback function at a specific point within its execution.

  - **Calling a Function using a pointer:** Invoking a function through its pointer, either by dereferencing the pointer or using it directly.
 
  - **Comparator Function:** A function used to compare two elements, commonly used in sorting and searching algorithms.

  - **Conditional Statements**: Programming constructs like if, else, and switch used to execute different blocks of code based on certain conditions.
  
**D**

  - **Declaration of Function Pointers:** The syntax used to declare a pointer to a function, which includes the return type and parameter types.

  - **Dereference Operator (*):** A unary operator used to access the value at the address stored in a pointer. In the context of function pointers, it is used to call the function pointed to by the pointer.

  - **Direct Function Call:** Invoking a function directly by its name and passing required arguments, without using a pointer. 

  - **Dynamic Function Call:** Calling a function at runtime using its function pointer, allowing for flexible code execution.
  
**E**

  - **Executable Code:** The portion of a program where function pointers point to, representing the start of a function's executable instructions.
  
**F**

  - **Function Name as Address:** A function's name can be used to get its address, similar to how array names represent addresses.
  
  - **Function Pointer:** A variable that stores the address of a function, allowing for dynamic invocation of the functio
  
  - **Function Pointer as Argument:** Passing a function pointer to another function, enabling** callback** mechanisms and flexible function execution.
  
  - **Function Pointer Return:** Returning a function pointer from a function, allowing for dynamic assignment of function behavior.

  - **Function Signature:** The combination of a function's return type, name, and parameters (types and number of arguments) that uniquely identifies it.
  
**I**

  - **Initialisation:** The process of assigning a specific value or address to a variable or pointer at the time of its declaration or later in the program.
  
**M**
  
  - **Modularity:** The design principle that separates a program into distinct, independent modules, each responsible for a specific functionality. Function pointers aid in achieving modularity.
  
  - **Pointer Arithmetic:**  Operations performed on pointers to navigate through memory, often used with **char* **to handle different data types.
  
**O**

  - **Object-Oriented Programming (OOP)**: A programming paradigm based on the concept of objects containing data and methods. While C is not an OOP language, function pointers and structures can be used to simulate OOP concepts.
  
**P**
  
  - **Pointer:** A variable that stores the memory address of another variable. In the context of functions, a function pointer stores the address of a function. 

  - **Precedence:** The rules determining the order in which operations are performed in expression. Parentheses are often used to ensure correct **precedence** when declaring function pointers.
  
  - **Prototype:** A declaration of a function that specifies its return type and parameters but not its body. Function prototypes are used to inform the compiler about a function's existence before its actual definition  
  
**Q**

  - **`qsort` function:** A standard C library function that uses functions pointers to sort arrays based on a user-defines comparator function.
  
**R**

  - **Return Type:** The data type of the value returned by a function. The return type is part of the function's signature.

**S**
  
  - **State Machine:** A computational model consisting of states and transitions, often implemented using arrays of function pointers. 
  
  - **Structure:** A user-defined data type in C that groups different variables under a single name. Structures can contain function pointers, enabling dynamic behavior based on data.
  
**T**

  - **Type Casting:** Converting a variable from one type to another, necessary when working with `void*` in generic functions. 

  - **Typedef:** A keyword in C used to create an alias for a data type. It can simplify the syntax for complex declarations, such as function pointers.

## Why Not Just Use Direct Function Calls? 

The first thing I wondered when I learned about **Function Pointer** was *"Why would I annoy myself using this complex thing when I can just call a function?"* That's actually more than a good question, it's a crucial question. Understanding that point will lead to a very clear understanding of WHY Function Pointers are useful and when to use them.


**Direct Function Call**

When directly using a **function call** (as we already did a lot in previous tasks). We declare the function and initialise it at the beginning of the code and then we continue our main code.

*Analogy:*

As we saw previously in ["Passing by Value VS Passing by Reference" in the pointers README.md](https://github.com/ArcturusSky/holbertonschool-low_level_programming/tree/main/pointers_arrays_strings#key-point-passing-by-value-vs-passing-by-reference) *passing a value* creates a **COPY** of the original value in the function. Changing the original value does not affect the copy, so the original cannot be changed during program execution.

**The same principle applies to functions:** When **directly called**, each function operates independently with its own **copy of inputs and outputs**. Each invocation of the function **creates a new instance** dedicated to processing specific inputs and generating corresponding outputs. 

This design ensures that inputs remain **consistent and unaltered** throughout program **execution**. 

However, calling functions directly and creating copies each time can be inefficient in terms of memory and processing, especially in larger programs. 

**Conclusion**

Technically we COULD use direct call instead of pointer but at **long shot** it's heavier than using pointers. Function pointers allow for more efficient and dynamic code, simplifying large programs and improving memory and processing management.

## Function Pointers

### What is it?

**Definition:** 

Function pointers are a powerful tool in C. They enables the storage of adresses of functions to call them indirectly.

**Why Use Them?**

Functions pointers provide a modular, powerful and flexible approach to writing code. They are especially useful in situations where the program needs to change its behavior WHILE running and not at the start or the end.

They are also essential when multiple functions need to be called and their selection can vary based on the specific requirements of the situation.

**Logic Example:**

  - **Without Function Pointer:** Necessary to use multiple `if/else` loops to call various functions based on conditions.

  - **With Function Pointer:** Functions are called **directly **through their pointers, eliminating the need for additional conditional structures.
  
**Conclusion:**

Function pointers make code more flexible and adaptable to changes. Which is very valuable in complex or evolving applications. They enhance code maintainability by reducin **redundancy** and **improving readability**.

### How To Declare a Function Pointer

**Definition:** 

Declaring a function pointer is done at the same place as variables. Not the same way but the same place which means at the beginning of your code.

**Template:** 

```c Template : Declaration Function Pointer
return_type (*function_pointer_example)(argument_type1, argument_type2, ...);
``` 

*In this template:*

- `return_type` is the type of data that the function pointed to by `function_pointer_example` will return.

- `function_pointer_example` is the name of the function pointer variable.

- `argument_type1, argument_type2, ...` are the types of arguments that the function pointed to by `function_pointer_name` will accept. (int, char, float, etc)  

**Example:**

```c
 int (*function_pointer_example)(int, float);
```

*In this example:*

- `function_pointer_example` is a pointer to a function that takes an `int` and a `float` as arguments.

- The function returns an `int`

### Initialisation and Use of a Function Pointer

A function pointer is initialised and used in the same block of code. The function must be assigned the address of an existing function that matches the expected **signature** (a signature is the arguments types and numbers).

**Steps to initialise and Use a Fonction Pointer:**

1. **Declare a Function::**

First, declare the function we want to point to.

```c
int example_add_function(int a, int b) 
{
	return (a + b);
}

```

2. **Declare a Function Pointer:**

Declare a function pointer that matches the signature of the function.

```c
int (*function_pointer_example)(int, int);
```

3. **Initialise the Function Pointer:**

Assign the adress of the function to the function pointer.

```c
function_pointer_example = &example_add_function;
```

Alternatively, you can omit the `&`operator. It's more a preference and clarity thing which is not mandatory.

```c
function_pointer_example = example_add_function;
```

4. **Use the Function Pointer:**

Call the function through the function pointer.

```c
int result = function_pointer_example(5, 3);
printf("Result: %d\n", result);
```

**Full Example with explanation:**

```c
#include <stdio.h>

int example_add_function(int a, int b) 
{
    return (a + b);
}

int main() 
{
    /** Declare a function pointer */
    int (*function_pointer_example)(int, int);
    
    /** initialise the function pointer */
    function_pointer_example = example_add_function;
    
    /** Use the function pointer to call the function */
    int result = function_pointer_example(5, 3);
    printf("Result: %d\n", result);
    
    return;
}
```

**Explanation:**

In this example, `example_add_function` takes two integers and returns their sum. The function pointer `function_pointer_example` is declared with the same signature. The pointer is then initialised to point to `example_add_function`. Finally, the function is called using the function pointer, and the result is printed.

### Characteristics of Function Pointers

Function pointers provdes flexibility and modularity in programming. They allow:

- **Dynamic Function Selection:** Change the function being called during runtime.

- **Callbacks:** Pass functions as arguments to others functions.

- **Efficient Handling of Function Tables:** Create arrays of function pointers for efficient state machine implementations or dispatch tables.

### Example: Dynamic Function Selection

**Definition:**

**Dynamic function selection** allows a program to choose and execute different functions during its execution based on certain conditions or inputs. This adds flexibility to the code, enabling it to adapt to different scenarios without hardcoding every function calls.

```c
#include <stdio.h>

/** Declare and initialise two simple functions: `add` and `substract` */
int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int main() 
{
	/** Declare a function pointer */
    int (*operation)(int, int);
    char op;

	/** Ask the user for an input */
    printf("Enter operation (+ or -): ");
    scanf(" %c", &op); /** Read the user input */

	/** Select the appropriate function based on user input */
    if (op == '+') 
    {
        operation = add; /** Assigned the `add` function to the function pointer */
    } 
    else if (op == '-') 
    {
        operation = subtract; /** Assisgned the `substract` function to the function pointer */
    } 
    else 
    {
		/** If an invalid operation is entered, print an error message and exit */
        printf("Invalid operation\n");
        return (1);
    }

	/** Use the function pointer to call the selected function */
    int result = operation(10, 5); /** Call the function through the pointer */
    printf("Result: %d\n", result); /** Print the result */

    return;
}

```

**Explanation:**

In this example, the function pointer `operation` is used to select between `add` and `subtract` functions during runtime based on user input (if they used `+` or `-`). This showcases the flexibility and power of function pointers in C programming.

### Example: Callback

**Definition:**

A **Callback Function** is a function that is passed as an argument to another function. This allows the called function to execute the **callback function** at a specific point withing its execution

```c Example: Callback Function
#include <stdio.h>

/** A simple function that will be used as a callback */
void print_message() 
{
    printf("This is a callback function.\n");
}

/** A function that takes another function as an argument (callback) */
void execute_callback(void (*callback)()) 
{
    printf("Before executing callback...\n");
    callback();  /* Call the passed function */
    printf("After executing callback...\n");
}

int main() 
{
    /*  Pass the print_message function as a callback */
    execute_callback(print_message);

    return;
}

```

**Explanation:**

In this example, `print_message` is a simple function that prints a message. The `execute_callback` function takes a function pointer `*callback` as an argument and calls this function within its execution. In `main`, the `print_message` function is passed to `execute_callback` as a **callback.**

### Example: Efficient Handling of Function Tables


**Definition:**

**Function tables** (or **arrays of function pointers**) are used to store a **list** of function addresses. The allows efficient and flexible calling of multiple functions without using conditional statements like `if`.

```c
#include <stdio.h>

/** Define some simple functions */
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Division by zero!\n");
        return 0;
    }
}

int main()
{
    /** Declare an array of function pointers */
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    /** Example usage of the function table */
    int choice, a = 10, b = 5;

    printf("Select operation: 0-Add, 1-Subtract, 2-Multiply, 3-Divide: ");
	/** Take the user input */
	scanf("%d", &choice);

    if (choice >= 0 && choice < 4) 
	{
        int result = operations[choice](a, b);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return;
}

```

**Explanation:**

In this example, we define four arithmetic functions: `add`, `substract`, `multiply`, and `divide`. An **array of function pointers**, named `operations`, is created to store the addresses of the functions.

The user is prompted to select an operation, and the corresponding function is called using the **function pointer array**. This approach avoids multiple `if` or any conditions statements and make the code more modular and easier to extend.


## Functions Pointers and Structures

**Definition:** 

**Function pointers** can be included in **structures** to create more flexible and modular code. This technique is useful for implementing **objet-oriented** programming concepts in C, such as *methods for data types* or *dynamic behavior based on data*.

  - **Template:** 

```c Template

#include <stdio.h>

/** Define a structure with a function pointer */
struct StructureName_Example
{ 
	returnType (*FunctionPointerName_example)(argumentType1, argumentType2); /** Function pointer in the structure */
};

/** Define function that match the function pointer signature */
returnType Function1_Example (argumentType1 a, argumentType2 b)
{
	/** Things you want your function to do */
}

returnType Function2_Example (argumentsType a, argumentType2 b)
{ 
	/** Things you want your function to do */
}

int main()
{ 
	struct StructureName_Example structInstanceName_Example; /** Declare a new instance of "StructureName_Exemple" to be used here */
	char Example_choice; /** Just a given example */

	/** Ask the user an Input */
	printf("Enter choice (example: + or -): ");
    scanf(" %c", &Example_choice); /** Read the choice from the user input */

	/** Assign the appropriate function to the structure's function pointer based on the user input */
	if (Example_choice == 'someCondition')
	{
		structInstanceName_Example.FunctionPointerName_Example = Function1_Example;
		/** Assign the first function */
	}
	else if (Example_choice == 'anotherCondition')
	{
		structInstanceName_Example.FunctionPointerName_Example = Function2_Example;
		/** Assign the second function */
	}
	else
	{
		/** Managing invalid input */
		printf("Invalid choice\n");
		return (1);
	}

	/** Use the function pointer in the structure to call the selected function */
	ReturnType result = structInstanceName_Example.FunctionPointerName_Example(arg1, arg2);
	/** Call the function through the structure */
	printf("Result is: %d\n", result); /** Print the result (adjust format as needed) */

	return;
}
``` 

**Explanation:**

1. **Structure Definition:**

	- `struct StructureName_Example` contains a function pointer name `FunctionPointerName_example`.

2. **Function Definitions:**

	- `Function1_Example` and `Function2_Example` are example functions that match the function pointer signature

3. **Main Function:**

	- Declare a structure instance `StructureinstanceName_Example` of type `struct StructureName_Example`.
	- Prompt the user to enter a choice and then read the input to know what to do
	- Based on the read input, assign the appropriate function (`Function1_Example` or `Function2_Example` to the structure's function pointer)
	- Call the selected function through the structure's function pointer and print the result


## Conclusion

To put it in a nutshell, **Function pointers** are crucial to constructing modular and efficent code. It may not be seen as such from a beginner's point of view since we are only coding small scripts until now, but from a larger scope, it's crucial. Either for the modularity, the flexibility, the memory management, processing management or the organization of the code itself.

## Author

Anne-Cécile Besse (Arc)