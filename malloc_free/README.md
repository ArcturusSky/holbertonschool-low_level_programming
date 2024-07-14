# Dynamic and automatic memory allocation in C

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with `malloc`, `calloc`,  `realloc` and `free` for the first time. I will also explain how to use Valgrind to check for memory leaks and using the `exit` fonction. This repository will then contain the tasks I had to complete about these functions. 

Note : I will start this README.md with the default allocation we used until now : "Automatic Allocation". I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [Dynamic and automatic memory allocation in C](#dynamic-and-automatic-memory-allocation-in-c)
	- [Summary](#summary)
	- [Glossary](#glossary)
	- [Automatic Allocation](#automatic-allocation)
	- [Dynamic Allocation](#dynamic-allocation)
		- [How `malloc` works](#how-malloc-works)
		- [How `calloc` works](#how-calloc-works)
		- [How `realloc` works](#how-realloc-works)
		- [How `free` works](#how-free-works)
		- [How `exit` works](#how-exit-works)
	- [Comparison Between Automatic and Dynamic Allocation](#comparison-between-automatic-and-dynamic-allocation)
		- [Automatic Allocation](#automatic-allocation-1)
		- [Dynamic Allocation](#dynamic-allocation-1)
		- [Choosing Between the Two](#choosing-between-the-two)
	- [Using Valgrind for Memory Debugging](#using-valgrind-for-memory-debugging)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary

  - **Deallocation:** The process of freeing memory that was previously allocated, returning it to the system for reuse.
  
  - **`free`:** A function that **deallocates** the memory previously allocated by `malloc`.
  
  - **Heap:** The area of memory used for dynamic memory allocation, where variables can persist beyond function calls.
  
  - **Lifespan:** The duration during which a variable or allocated memory exists and can be accessed. Automatically allocated memory has a lifespan limited to the function execution, while dynamically allocated memory persists until explicitly freed.
  
  - **`malloc`:**  A function that allocates a specified amount of memory in bytes from the **heap** and returns a pointer to the beginning of the allocated memory block. If the allocation fails, it returns NULL.
  
  - **Pointer:** A variable that stores the memory address of another variable.
  
  - **Scope:** The region of the program where a variable is accessible. For automatically allocated memory, the scope is typically within the function where it is declared.
  
  - **Stack:** The area of memory used for static memory allocation, storing local variables and function call information.

  - **Valgrind:** A powerful tool for debugging and profiling that detects memory management issues in C and C++ programs, helping developers ensure memory safety and program correctness.


## Automatic Allocation

**In short:**

Automatic allocation of memory means that the allocation and *deallocation* of memory are automatically managed by the compiler. It's used when the memory needs are already known and fixed. 

**Definition:**

Automatic allocation allocates memory on the stack for local variables with a predetermined size defined at compile time, and this memory is deallocated (freed) when the function returns.

- **Caracteristics:**

	- **Memory**: Allocate on the stack
	
	- **Scope**: Limited to the function in which it is declared (cannot be used elsewhere).
	
	- **Lifespan**: Automatically freed at the end of the function (when it returns).

- **Avantages:**

	- **Fast**: Allocation and deallocation are managed automatically
	
	- Simple: No need to manage it manually

- **Drawbacks:**

	- **Fixed size**: Memory size is fixed and determined at compile time.

	- **Limited stack:** Stack memory size is limited, which can lead to an errors when trying to allocate large amounts of memory.
  
- **Note:**

	Any "classical" function with local variables that doesn't use `malloc` is utilizing automatic allocation.

## Dynamic Allocation

Dynamic allocation in C allows memory to be allocated during program execution using `malloc`. It's used when the memory size needed isn't known beforehand or when flexible data structures like large arrays are required.

- **Caracteristics:**

	- **Flexibility:** Allocate exactly the amount of memory needed during execution, minimizing memory waste.
	
	- **Large structures of datas:** Allows us to manage structures of datas when the program is runing so even large ones are allowed.
	
	- **Lifespan:** Dynamic memory stays until it's been deallocated manually with `**free**` function. So it's not limited to it's function, a bit like global variables.


### How `malloc` works

**Use:** Allocate a given memory block of the requiered size and no more or less.
	
**Template for `malloc` function :** 

  ```c 
  variable_name = malloc(number_of_elements * sizeof(type_of_element));

 /** NOTE: "variable_name" **MUST** to be declared as a pointer before. */
 /**
  * NOTE: if you already know numbers of bytes (don't forget * to check your "main.c" used for exercises) then no need
  * for "sizeof"
  */
  ``` 
	
**Return:** Return a pointer to the allocated memory area or "NULL" in case of faillure.

*Exemple:*

````c
int *array;
array = (int*) malloc(10 * sizeof(int)); /** allocate memory for 10 int. */ 
````

### How `calloc` works

**Use:** Allocate memory for an **array** of elements, initializing them to **zero**.
	
**Template for `calloc` function:** 

  ```c 
   variable_name = calloc(number_of_elements, sizeof(type_of_element));

  /** NOTE: "variable_name" **MUST** to be declared as a pointer before. */
  ``` 
	
**Return:** Return a pointer to the allocated memory. This memory is set up correctly so any type of variable (like an int, char or float) can be stored in it. If allocation fails, return **NULL**

*Exemple:*

````c
	int *arr;
    int num_elements = 5;

    /** Allocate memory for 5 integers and initialize them to zero */
    arr = calloc(num_elements, sizeof(int));

````

### How `realloc` works

**Use:** Used to **resize** previously allocated memory blocks, either extending or shrinking them as needed.
	
**Template for `realloc` function:** 

  ```c 
  variable_name = realloc(existing_ptr, new_size);

  /** 
   * NOTE: `variable_name` **MUST** to be declared as a pointer before. -> will hold the address of the relocated memory
   * 
   * `existing_ptr` **MUST** be declared as a pointer before too -> pointer to the memory PREVIOUSLY allocated by `malloc`, `calloc` or `realloc`
   * 
   * `new_size` is the new size of the allocated memory
   */
  ``` 
	
**Return:** Return a pointer to the newly allocated memory, which may be the same as the original or a new location if the block was moved. If "size" is 0, it retuns **NULL** and free the original block.

*Exemple:*

````c
	int *arr;
    int num_elements = 5;
    int new_num_elements = 10;

/**  Allocate memory for first time for 5 integers */	
	arr = malloc(num_elements * sizeof(int));
	
	/** I skipped the check if null part and initializing the arrays with vallue */

	/** Resize the memory block to hold 10 integers */
    arr = realloc(arr, new_num_elements * sizeof(int));

	/** 
	 * Skipped check if null part.
	 * NOTE: don't forget to reinitialized the elements! 
	 */

	for (int i = num_elements; i < new_num_elements; i++) {
    arr[i] = i + 1;
}

````


### How `free` works

**Use:** Deallocate a memory bloc allocate by `malloc`, `calloc` or `realloc`.
	
**Template for `free` function:** 

  ```c 
 free(pointer_to_deallocate);;
  ``` 

*Exemple:*

```c
free(pointer); /** Deallocate the memory allocate to "pointer". */
```

*Concret exemple using both malloc and free:*

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *array;
    int n = 10;
    array = (int*) malloc(n * sizeof(int));  /** Dynamic allocation */

    if (array == NULL) {
        printf("Allocation failure\n");
        return 1;
    }

    /** Using 'array' */
    for (int i = 0; i < n; i++) {
        array[i] = i;
        printf("%d ", array[i]);
    }

    free(array);  /** Deallocate 'array' */
    return 0;
}
```

### How `exit` works

**Use:** Terminate immediately a program. It takes an integer status code as an argument to indicate the reason of for the program's termination.
Usually:
- `exit(0)`: Success
- `exit(1)`: General error
- `exit(2)`: Misuse of Shell
- `exit(3)`: User-defined
      - Not standard exit code, it can be defined by the programmer for specific error conditions such as missing files, incorrect input, or other conditions that require programe termination

**Prototype:** 

  ```c 
  void exit (int status);
  /** "int statues" refers to (0),(1),(2),(3) */
  ``` 

*Exemple:*

````c
 
````

## Comparison Between Automatic and Dynamic Allocation

### Automatic Allocation

- **Memory Management:**

  - **Allocation:** Managed by the compiler, allocated on the stack.
  - **Deallocation:** Automatically freed when the function scope ends (when `return` is encountered).

- **Usage:**

  - Suitable for managing fixed-size data structures.
  - Fast allocation and deallocation.

- **Limitations:**

  - Fixed memory size determined at compile time.
  - Limited scope within the function where it's declared.

### Dynamic Allocation

- **Memory Management:**

  - **Allocation:** Managed manually using `malloc`, allocated on the heap.
  - **Deallocation:** Must be manually freed using `free` to avoid memory leaks.

- **Usage:**

  - Ideal for handling variable-sized data structures and large arrays.
  - Provides flexibility in memory allocation during program execution.

- **Advantages:**

  - Efficient use of memory by allocating only the required amount.
  - Supports complex data structures that are not known at compile time.

- **Considerations:**

  - Requires careful memory management to avoid memory leaks or dangling pointers.
  - Slower than automatic allocation due to manual management overhead.

### Choosing Between the Two

- **Automatic Allocation:** Use when the size and lifespan of data are known and fixed at compile time, and when simplicity and speed are priorities.

- **Dynamic Allocation:** Prefer when dealing with variable-sized data structures or when memory requirements are not known until runtime, albeit with the responsibility of manual memory management.

Understanding the differences and trade-offs between automatic and dynamic allocation will help in choosing the appropriate memory management strategy for different programming tasks.

## Using Valgrind for Memory Debugging

- **Definition:** 

  Valgrind is  a powerful tool that helps detect memory leaks, invalid memory access, and other memory-related errors in your C programs.

- **How to use Valgrind:**

**Installation:** Ensure Valgrind is installed on your system
**Compile:** Compile your C program with debugging symbols enabled (-g flag).
  
```bash
gcc -g -o myprogram myprogram.c
```
  
**Run Valgrind:** Use Valgrind to analyse your program by running it through Valgrind's memory checking tool `memcheck`.
  
```bash
valgrind --tool=memcheck ./myprogram
```
  
**Interpret results:** Valgrind will provide detailed information about memory errors and leaks detected during the program execution.

## Conclusion

In conclusion, choosing between dynamic and automatic memory allocation in C depends on the specific needs of your program. Automatic allocation, managed by the compiler, offers simplicity and efficiency for fixed-size data structures with predictable memory requirements. On the other hand, dynamic allocation with malloc and free provides flexibility for handling variable-sized data structures and large arrays during program execution.

Understanding the nuances and trade-offs between these allocation methods is crucial for effective memory management. Regardless of the method chosen, responsible memory use and proper handling of pointers are essential to avoid memory leaks and ensure program stability.

## Author

Anne-Cécile Besse (Arc)