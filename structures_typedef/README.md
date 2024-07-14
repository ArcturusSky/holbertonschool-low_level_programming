# Main subject of my README.md

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with **structures** and `typedef` which is crucial to organized data and type aliasing in C.

Note : I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [Main subject of my README.md](#main-subject-of-my-readmemd)
	- [Summary](#summary)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
	- [What are Structures?](#what-are-structures)
	- [Creating a structure step by step](#creating-a-structure-step-by-step)
		- [Step 1: Declaring a Structure and its Members](#step-1-declaring-a-structure-and-its-members)
		- [Step 2: Initializing the Structure](#step-2-initializing-the-structure)
		- [Template of "How "...." works"](#template-of-how--works)
	- [Typedef](#typedef)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary (in alphabetical order)

  - **Name:** 
 
  - **Name:** 
 
  - **Name:** 

  - **Name:** 
 
  - **Name:** 
  
  - **Name:** 
  
  - **Name:** 
  
  - **Structures:** User-defined data types in C that allow grouping of different variables under a single name. 
  
  - **Typedef:** A **keyword** in C used to create **aliases** or new names for existing data types, including structures
  

## What are Structures? 

**Definition:** 
A structure in C is like a library of data defined by the developper. It can contain and combined various types of data (char, int, unsigned int, etc) under a single name.

**Why using it?**
Structures help in organizing related data elements into a single unit, improving code clarity and modularity. They are essential for managing complexe data types and creating modular programs.

**Where to declare a structure**

A structure can be declare outside functions, similar to globale variables or function prototype. The elements of the structre are declared inside its scope (inside its code) between its `{}`.

Then to access this elements we use the dot `.` operator.

*Exemple:*

```c
user.name = "Arc";
```

In this exemple, the structure name is "user" and access the variable "name" with the `.` with the value "Arc". When when other functions will call `user.name` it will return "Arc".

## Creating a structure step by step

### Step 1: Declaring a Structure and its Members

Variables and such withing a structure is called a **member**. In C, a structure is declared using the `struct` keyword followed by the structure's name and its members enclosed in curly braces `{}`. Each member inside the structure represents a piece of data related to the structure's purpose.

NOTE: Here and withing the following course, the structure will be "user".

```c
/**
 * struct user - Represent a user with basic attributes
 * @name: String for the user's name
 * @age: Integer for user's age
 * @score: Float for user's score (score to nothing it's an exemple)
 * 
 * Description: A simple structure to store basic user data.
 */

struct user
{ 
	char *name		/** Pointer because it's a string */
	int age;		/** Integer for user's age */
	float score;	/** Float for user's score */
};
```
**Explanation:**

  - **`struct` *user***: Defines a structure named *"user"* which encapsulates data related to a user.

  - **Members** (name, age, score): These are variables inside the structure (`struct`) representing the user's name, age, and score respectively.


### Step 2: Initializing the Structure

After defining a structure, we can create an **instance** of it within the `main` function or any other part of our program. Here’s how we initialize and use an instance of the *user* structure:

```c
int main(void)
{
	/** Declare an instance of "struct user" */
	struct user exemple_user;

	/** Initialize values for the instance */
	example_user.name = "Arc";
	exemple_user.age = 30;
	exemple_user.score = 99.5;

	return (0);
}
```
**Explanation:**

- **`main` function:** This is where the program begins executing. It's commonc practice to start a **instance** of a structures here.

- **`struct user` *example_user***: Declares an instance named *"example_user"* of type `struct user`. 


### Template of "How "...." works"

**Definition:** 

  - **Template:** 

```c 

``` 

  - **Exemple:**

```c
 
```




## Typedef

## Conclusion

## Author

Anne-Cécile Besse (Arc)