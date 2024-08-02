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
		- [`close`](#close)
		- [`read`](#read)
		- [Strategies for Reading Data When Size is Unknown](#strategies-for-reading-data-when-size-is-unknown)
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
  
  - **Standard Output (stdout):** File descriptor **`1`** (`STDOUT_FILENO`).
    
	- Used for writing output data (*example:* displaying text on the screen).
  
  - **Standard Error (stderr):** File descriptor **`2`** (`STDERR_FILENO`).
    
	- Used for outputting error messages (*exemple:* program error messages).

**Why use them?**

File descriptors are essential for performing file operations in Unix_like systems, providing a way to interact with files and other I/O resources.

**Analogy:** Imagine, you have a mailbox with three different drawers:
	
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

  - **`0_RONLY`:** Open the file for reading only.
  - **`0_WRONLY`:** Open the file for writing only.
  - **`0_RDWR`:** Open the file for both reading and writing.
  - **`0_CREAT`:** Create the file if it does not exist.
  - **`0_TRUNC`:** Truncate (cut off) the file to zero length if it already exists.
  - **`0_APPEND`:** Append data to the end of the file.

**Note:** When creating a file, you also need to specify the fil permissions using **`mode`**, which determines who can read, write, or execute the file.

**Example:**

Here's an example of using `open` to open a file name `"file.text"`:

```c
#include <fcntl.h>  /** Includes definitions for file control operations */
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>  /** Includes definitions for POSIX constants and types */

int main() {
    /** Open "file.txt" for reading and writing, create if it does not exist, and truncate it to zero length if it exists */
    int fileDescriptor = open("file.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);

    /** Check if the file was opened successfully */
    if (fileDescriptor < 0) {
        /** Handle the error */
        perror("Error opening file");
        return 1;
    }

    /** File operations can be performed here */

    /** Close the file descriptor */
    close(fileDescriptor);

    return 0;
}

```

**Explanation:**

  - open("file.txt", O_RDWR | O_CREAT | O_TRUNC, 0666);

    - **`O_RDWR`:** Open the file for both reading and writing
    - **`0_CREAT`:** Create the file if it doesn't exist.
    - **`0_TRUNC`:** Truncate the file to zero length if it already exists.
    - **`0666`:** File permissions (read and write for everyone)

	- **`fileDescriptor`** will hold the file descriptor for "``file.txt"``. If the open call fails, it will return **`-1`**.

### `close`

**Definition:**

The **`close`** system call is used to **close an open file descriptor**
. When you're done working with a file, calling `close` realeased the system resources associated with that file descriptor.

**Why Use it?**

Using **`close`** is important to free up system resources that were allocated for the file descriptor. This prevents resource leaks and ensures that other processes or parts of your programm can use these resources efficiently.

**Template:**

```c
int close(int fd);
```

**Parameters:**
  
  - `fd`: The file descriptor that you want to close.

**Returns:**

  - **`0`** on success
  - **`-1`** on faillure, and sets **`errno`** to indicate the error.

**Example:**
Here's a simple example demonstration how to use **`close`** to close a file descriptor:

```c
#include <fcntl.h>   /** Includes definitions for file control operations */
#include <unistd.h>  /** Includes definitions for POSIX constants and types */
#include <stdio.h>   /** Includes definitions for standard I/O operations */

int main() 
{
    /** Open "file.txt" for reading and writing, create if it does not exist */
    int fileDescriptor = open("file.txt", O_RDWR | O_CREAT, 0666);

    /** Check if the file was opened successfully */
    if (fileDescriptor < 0) {
        perror("Error opening file");
        return -1;
    }

    /**!  Perform file operations here */

    /** Close the file descriptor */
    if (close(fileDescriptor) < 0) {
        perror("Error closing file");
        return (-1); /** Return -1 to indicate an error occurred during file closing */
    }

    return (0); /** Return 0 to indicate success */
}
```
**Explanation:**

  - **`close(fileDescriptor);`:** Closes the file descriptor previously obtained by the **`open`** system call.
  - if **`close`** returns **`-1`**  it indicate that the file descriptor could not be closed. **`perror`** is used to print the error message.

### `read`

**Definition:**

The **`read`** system call is used to **read data** from a file descriptor into a buffer. It retrieves data from a file or I/O resource.

**Why Use it?**

Using **`read`** to obstain data from a filr oe other I/O resource. This is essential for processing file contents or handling input data. 

**Template:**

```c
ssize_t read(int fd, void *buf, size_t count);
```

**Parameters:**
  
  - **`fd`**: The file descriptor from which to read data. This descriptor must be valid and open for reading.
  - **`buf`:** A pointer to the buffer where the read data will be stored.
  - **`count`**: The number of bytes to read from the file descriptor.

**Returns:**

  - **Number of bytes read:** The number of bytes successfully read into the buffer.
  - **`0`** Indicates the end of the file (EOF) has been reached.
  - **`-1`** Indicates an error occurred, and **`errno`** is set to indicate the specific error.

**Example:**
Here's a simple example demonstration how to use **`read`** to read data frome a file:

```c
#include <fcntl.h>   /** Includes definitions for file control operations */
#include <unistd.h>  /** Includes definitions for POSIX constants and types */
#include <stdio.h>   /** Includes definitions for standard I/O operations */

int main(void) 
{
    /** Open "file.txt" for reading only */
    int fileDescriptor = open("file.txt", O_RDONLY);

    /** Check if the file was opened successfully */
    if (fileDescriptor < 0) 
	{
        perror("Error opening file");
        return (-1);  /** Return -1 to indicate an error occurred */
    }

    /** Buffer to store the read data */
    char buffer[100];
    ssize_t bytesRead = read(fileDescriptor, buffer, sizeof(buffer));

    /** Check if the read operation was successful */
    if (bytesRead < 0) 
	{
        perror("Error reading file");
        close(fileDescriptor);  /** Close the file descriptor */
        return (-1);  /** Return -1 to indicate an error occurred */
    }

    /** Print the data read from the file */
    printf("Read %zd bytes: %.*s\n", bytesRead, (int)bytesRead, buffer);

    /** Close the file descriptor */
    close(fileDescriptor);

    return 0;  /** Return 0 to indicate success */
}

```
**Explanation:**

  - **`read(fileDescriptor, buffer, sizeof(buffer));`**: Reads data from fileDescriptor into buffer. The sizeof(buffer) specifies the maximum number of bytes to read.
  - **`bytesRead`**: Stores the number of bytes actually read. If bytesRead is 0, it means the end of the file has been reached.

### Strategies for Reading Data When Size is Unknown

  1. **Read in Chunks:**
     - You can read data in chunks of a fixed size (e.g., 1024 bytes) and then process or store it incrementally. This is useful when you’re dealing with large files or streams where you don’t know the total size.  
  2. **Read Until End-of-File (EOF):**
  3. **Dynamic Buffer Allocation:**


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