# FILE I/O

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with FILE I/O. This project will holds my 

Note : I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [FILE I/O](#file-io)
	- [Summary](#summary)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [File Descriptors](#file-descriptors)
	- [System Calls](#system-calls)
		- [`open`](#open)
		- [Template of "How "...." works"](#template-of-how--works)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary (in alphabetical order)

**A**
  - **Name:** 

**B**

  - **Name:** 

**C**

  - **Name:** 

**D**

  - **Name:** 

**E**

  - **Name:** 

**F**  

  - **Name:** 

**G**  

  - **Name:** 

**H**  

  - **Name:** 

**I**  

  - **Name:** 

**J**

  - **Name:** 

**K**

  - **Name:** 

**L**

  - **Name:** 

**M**

  - **Name:** 

**N**

  - **Name:** 

**O**  

  - **Name:** 

**P**  

  - **Name:** 

**Q**  

  - **Name:** 

**R**  

  - **Name:**

**S**

  - **Name:** 

**T**

  - **Name:** 

**U**

  - **Name:** 

**V**

  - **Name:** 

**W**

  - **Name:** 

**X**  

  - **Name:** 

**Y**  

  - **Name:** 

**Z**  

  - **Name:**  

## File Descriptors

**Definition:** 
A file descriptor is an integer handle used by the operating system to manage open files. it acts as a unique identifier for each file or I/O stream (flux d'entrée/sortie) that a program can access. The standard file descriptors are:

  - **Standard Input (stdin):** File descriptor **`0`** (`STDIN_FILENO`).
    
	- Used for readin incoming data (*example:* keyboard input).
  
  - **Standard Output (stdout):** File descriptor** `1`** (`STDOUT_FILENO`).
    
	- Used for writing output data (*example:* displaying text on the screen).
  
  - **Standard Error (stderr):** File descriptor **`2`** (`STDERR_FILENO`).
    
	- Used for outputting error messages (*exemple:* program error messages).

**Why use them?**
File descriptors are essential for performing file operations in Unix_like systems, providing a way to interact with files and other I/O resources.

***Analogy:** Imagine, you have a mailbox with three different drawers:
	
  - One drawer for incoming letters **(stdin)**
  - One drawer for outgoing letters **(stout)**
  - One drawer gor letters containing problems or errors **stderr**.

Each drawer has a number so you can easily find it and know where to put or retrieve letters. File descriptors work similary to manage data streams.

**Code example:**
Here's a simple example in C to illustrate the use of file descriptors:

```c
#include <stdio.h>
#include <unistd.h>  /** Includes definitions for file descriptors */

int main() 
{
    /** Write a message to standard output (stdout) */
    const char *message = "Hello, here is a message on stdout!\n";
    write(1, message, 34);  /** 1 is the file descriptor for stdout containing 34 char*/

    /** Read a character from standard input (stdin) */
    char c;
    read(0, &c, 1);  /** 0 is the file descriptor for stdin */

    /** Write a message to standard error (stderr) */
    const char *error_message = "This is an error message on stderr!\n";
    write(2, error_message, 36);  /** 2 is the file descriptor for stderr */

    return (0);
}
```
**Code Explanation:**

  - **`write(1, message, 34);`:** Sends `message` to file descriptor **`1`**. The **`write`** function write data directly to a file descriptor.
  - **`read(0 &c, 1);`:** Reads a character from file descriptor **`0`** **(stdin)**. The **`read`** function reads data from a file descriptor.
  - **`write (2, error_message, 36);`:** Sends an error message to file descriptor **`2`** **(stderr).**



## System Calls

### `open`

**Definition:**
The **`open`** system call is used to **open a file** and returns a **file descriptor**, which is a unique integer used to identify the fil in subsequent operations.

**Why use it?**
You us **`open`** tp either create a new file or access an existing file. It provides a file descriptor that allows you to perform various operations on the file, such as reading or writing.

**Template:**

```c
int open(const char *pathname, int flags, mode_t mode);
```
**Parameters:**

  - **pathname:** The path to the file you want to open.
  - **flags:** Specifies how the fil should be accessed or modified.
  - **mode:** File permissions to use when creating a new file (only used with **`0_CREAT`**).

**Common Flags**


### Template of "How "...." works"

**Definition:** 

  - **Template:** 

```c 

``` 

  - **Exemple:**

```c
 
```

## Conclusion


## Author

Anne-Cécile Besse (Arc)