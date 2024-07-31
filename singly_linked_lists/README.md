# Data structure and Linked lists

This repository is part of the `low-programming` parent repository focused on C programming. Here, I'm starting to learn and work with Data structure and especially **linked list**

Note : I will also update that README.md regarding new concepts I have to learn during these projects.

## Summary

- [Data structure and Linked lists](#data-structure-and-linked-lists)
	- [Summary](#summary)
	- [Glossary (in alphabetical order)](#glossary-in-alphabetical-order)
- [Data structures](#data-structures)
	- [Data structures basics](#data-structures-basics)
		- [Data structures and types](#data-structures-and-types)
	- [Array Data Structure](#array-data-structure)
	- [Linked List](#linked-list)
	- [Singly Linked List Structure](#singly-linked-list-structure)
		- [Types of Linked Lists](#types-of-linked-lists)
		- [Linked List Structure](#linked-list-structure)
		- [Adding a node at the beginning of a singly Linked List](#adding-a-node-at-the-beginning-of-a-singly-linked-list)
		- [Adding a node at the end of a singly Linked List](#adding-a-node-at-the-end-of-a-singly-linked-list)
		- [Removing a note at the begenning of a singly Linked List](#removing-a-note-at-the-begenning-of-a-singly-linked-list)
		- [Removing a node at the end of a singly linked list](#removing-a-node-at-the-end-of-a-singly-linked-list)
		- [Traversing a Linked List](#traversing-a-linked-list)
	- [Doubly linked list](#doubly-linked-list)
		- [Similarities between Singly and Doubly linked list](#similarities-between-singly-and-doubly-linked-list)
		- [Differences between Singly and Doubly linked list](#differences-between-singly-and-doubly-linked-list)
		- [Example Code for Doubly Linked List](#example-code-for-doubly-linked-list)
	- [Conclusion](#conclusion)
	- [Author](#author)

## Glossary (in alphabetical order)

**A**
  - **Add a Node:** The process of inserting a new node into a linked list, which can be done at the beginning, end, or any position in the list.

**B**

**C**
  - **Create Node:** The function or process of allocating memory for a new node and initializing its values, often done using a separate function.

**D**

**E**
  - **Element:** A single unit in a linked list, consisting of data and a pointer to the next node.

**F**
  - **Free Memory:** The process of releasing memory previously allocated to a node that is no longer in use, preventing memory leaks.

**G**

**H**

**I**
  - **Initialize Node:** Setting up a new node with initial values, typically involving setting the data and the `next_node` pointer.

**J**

**K**

**L**
  - **Linked List:** A data structure consisting of nodes where each node contains data and a pointer to the next node in the sequence.

**M**
  - **Memory Management:** The process of efficiently allocating and freeing memory in a program, crucial for maintaining the linked list and avoiding memory leaks.

**N**
  - **Node:** An individual element in a linked list, consisting of data and a pointer to the next node.

**O**

**P**
  - **Penultimate Node:** The node in a linked list that is immediately before the last node.

**Q**

**R**
  - **Remove Node:** The process of deleting a node from a linked list by adjusting pointers to exclude the node from the list and freeing its memory.
  - **Reassign Pointer:** Changing the value of a pointer to reference a different node or set it to `NULL`.

**S**
  - **Set to NULL:** Assigning the `NULL` value to a pointer to indicate that it does not point to any valid memory address, marking the end of the list or the absence of a subsequent node.
  - **Start of List:** The initial node in the linked list, often referred to as the head node.

**T**
  - **Time Complexity:** A measure of the amount of time an algorithm takes to complete as a function of the size of the input.
  - **Traverse:** The process of moving through each node in a linked list, typically starting from the head node and following `next_node` pointers until the end is reached.

**U**

**V**

**W**

**X**

**Y**

**Z**

**0(1)**
  - **Constant Time Complexity:** An operation whose execution time is constant and does not change with the size of the input.

**0(n)**
  - **Linear Time Complexity:** An operation whose execution time grows linearly with the size of the input.


# Data structures

## Data structures basics

Data definition must possess these following characteristics 

   - **Atomic:** Define a unique concept
   - **Traceable:** Must correspond to an identifiable and real element.
   - **Accurate:** Must be clear and without hesitation about what it is
   - **Clear and Concise:** Easy to understand and direct.

**Data Object:** An entitity containing data.

**Data Type:** Catagorizes data and determines allowables values and operations. Includes:

  - **Built-in:** Standard types provided by languages, such as Integer, Boolean, Float and Characters/String.
  - **Derived:** These are custom types created by combining or organizing built-in types to form more complex structures. Examples include:
    - **List:** A collection of elements, potentially of varying types.
    - **Array:** A fixed-size sequence of elements of the same type.
    - **Stack:** a collection that follows "Last in, First Out (LIFO) order.
    - **Queue:** A collection that follows " Firt In, First Out (FIFO) order.

### Data structures and types

**Definition - Data structure:** Organize and manage data in programming, making sata access and processing easier. They're not tied to any specific language.

**Definition - Data Types:** Represent the nature of data (integer, strings etc), while data structure organize multiple data types.

**Types of Data Structures:**

1. **Linear:** Store data sequentially (next to each others),
	*Example:*
		Arrays, Linkeds Lists, Stacks, Queues.

	- **Static:** Fixed memory allocation (Arrays)
	- **Dynamic:** Flexible memory allocation (Linked Lists, Stacks, Queues)

2. **Non-Linear:** Store dara hiérarchically, reducing space complexity and optimizing memory usage:
	*Example:*
		Graphs, Trees, Tries, Maps.


## Array Data Structure

**Definition:** An array is a **linear** data structure used to store a fixed_size sequence of elements of the same type. Arrays can be one-dimensional or multi-dimensional.

**Key Terms:**

**Element:** An individual idem in the array.

**Index:** A zero-based position identifier for each element.

**Basic Operations:**

- **Traversal:** Visit and print each element.
- **Insertion:** Add an element at a specified index.
- **Deletion:** remove an element from a specified index.
- **Search:** Locate an element by value or index.
- **Update:** Change an element at a given index.
- **Display:** Show all elements in the array.
   
**Memory and Syntax:**
   
Arrays use contigous memory locations. Allocated a automatically or dynamically.

**Template:**
```c
data_type array_name[array_size]
```

**Advantages:**

**O(1) Access Time:** Direct access to any elements using its index.


## Linked List

**Definition:** A **linked list** is a fundamental data structure used to store and organize data. Unlike **arrays**, linked list to not require contiguous memory allocation. Instead, they consist of a series of elements called **nodes**, each of which contains two main components:

  1. **Data:** The value of information stored in the node.
  2. **Pointer/Link:** A reference to the next node in the sequence.

The primary advantage of linked lists over arrays is their dynamic nature. They allow for efficient insertion and deletion of elements without the need for reallocation or shifting of elements.

**Characteristics:**

  - **Dynamic Size:** Can easily grow or shrink in size by allocation or deallocation memory as needed.
  
  - **Non-Continguous Storage:** **Nodes** are not stored in contiguous memory locations, which can make insertion and deletion operation more efficient compared to arrays.
  
  - **Sequential Access:** **Nodes** are accessed sewuentially starting from the **head** of the list.

**Why use it?**

**Implementation of Data Structures:** Linked list are used to implement stacks, queues, deques, and other complex data structures.

**Dynamic Memory Allocation:** Useful in scenarios where the number of elements is not known in advance or varies frequently.

## Singly Linked List Structure

A  typical link list has the following components:

  1. **Head Node:** The starting point of the linked list. It points to the first node. If the list is empty, the **head** is set to `NULL`.
  
  2. **Node:** The basic unit of a linked list, which includes:
  	
  - **Data Field:** Store the data or value.

  - **Next Pointer:** A reference to the next node in the list.
	*Note: In a singly linked list, this is a **single pointer**. While in a **doubly linked** list, there is an additional pointer to the previous node.* 

  -  **Tail Node:** In some linked lists, particularly in **circular lists**, the nail node points back to the **head node** forming a loop.




### Types of Linked Lists

  1. **Singly Linked List:**

- **Structure:** Each node contains a `data_value` and a `next_pointer`.

- **Traversal:** Can be traverses in a single direction (from **Head** to end).
	
	*Example scheme:*
```css
Head → [Data|Next] → [Data|Next] → [Data|NULL]
```

  2. **Doubly Linked List:**

- **Structure:** Each node contains a `data_value` and a `next_pointer`, and a `previous_pointer`.

- **Traversal:** Can be traverses in borth directions (forward and backward).

	*Example scheme:*
```css
Head ← [Prev|Data|Next] ↔ [Prev|Data|Next] ↔ [Prev|Data|NULL]
```

  3. **Circular Linked List**
   
- **Structure:** The last node's `next_pointer` points back to the **head** node, forming a circular structure.

- **Types:** Can be singly circular or doubly circular.

*Example scheme (singly circular, but it's the same for a double):*
```css
Head → [Data|Next] → [Data|Next] → [Data|Head]
```

### Linked List Structure

In almost every implementations of Linked List in C, the first step is to create a structure (`struct`) to reprensent the list nodes. This structure hold - in general - two elements:

  1. **Data:** Data that each node has to stock. It can be any type of data: an integer, a float, or even **another structure**
  
  2. **Pointer to a nex node:** A pointer to the next node in the list. Which allows to linked each node together.

**Template of a Node Structure:**

```c
typedef struct Linked_List_Node {
    int value;                         /** The data held by the node */
    struct Linked_List_Node *next_node;/** Pointer to the next node in the list */
} Linked_List_Node;

```
*Explanation:*

  1. **`int value`:** This field holds the data you want to store in the node. In this example it's an integer named "value".
  2. **`struct Linked_List_Node` *next_node :** This field is a pointer to the next pointer in the list. It's a type `struct Linked_List_Node *` because it's **pointing to an instance ot the SAME stucture type.** 

**How does it work?**

  - **Creating a Node:** When you create a node, you allocate memory for a ` Linked_List_Node` instance et define the value. The `next_node`  pointeris usually initialized to `NULL` IF it's the last one of the list.
  
  - **Node Links:** When a node is inserted into the list, its field `next_node` is updated to point to the next node that follows it. If you inserted it at the begining it will point to the previous **head** node. If it's at the end it will point to `NULL` and the previous node will point to the new tail.
  
  - **Traversing the List:** To traverse the list, you start at the **Head node** and follows `next_node` pointers until you reached the last one who point to `NULL`. 

### Adding a node at the beginning of a singly Linked List

**Objective:** Add a new element to the beginning of a singly linked list.

**Detailed Steps:**

**1. Memory Allocation for the New Node:**

Use `malloc` to allocate memory for a new node. This memory is required to store the new node's data and its pointer to the next node.

**2. Check for Successful Memory Allocation:**

After allocation, it is crucial to verify if the memory allocation was successful. If `malloc` returns `NULL`, it indicates a **failure to allocate memory**, and appropriate **error handling should be implemented.**

**3. Initialize the New Node:**

Set the value of the new node to the value you want to add to the list.
Set the `next_node pointer` of the new node to point to the **current head** of the list. This step links the new node to the existing list.

**4. Update the Head Pointer:**

Update the **head pointer** to point to the new node. This operation makes the new node the **first** element in the list.

*Full Example (with explanation below):*

```c
#include <stdio.h>
#include <stdlib.h>

/** Function to add a new element to the beginning of the linked list */
void addElement(Linked_List_Node **head, int newValue) 
{
    /** Step 1: Allocate memory for the new node */
    Linked_List_Node *newNode = malloc(sizeof(Linked_List_Node));
    
    /** Step 2: Check if memory allocation was successful */
    if (newNode == NULL) {
        /** Handle memory allocation failure (optional: print error, exit, etc.) */
        printf("Memory allocation failed\n");
        return;
    }

    /** Step 3: Initialize the new node */
    newNode->value = newValue;          /** Set the value of the new node */
    newNode->next_node = *head;         /** Set the next_node pointer to the */current head

    /** Step 4: Update the head pointer to point to the new node */
    *head = newNode;                   	/** The new node is now the first node in the list */
}
```

1. **Memory Allocation:**
   
```c
Linked_List_Node *newNode = malloc(sizeof(Linked_List_Node));
```

This line allocates memory for a new `Linked_List_Node` structure. The `sizeof(Linked_List_Node)` ensures that enough memory is allocated for both the `value` and the `next_node` pointer.

2. **Error Checking:**

```c
if (newNode == NULL) {
    printf("Memory allocation failed\n");
    return;
}
```

If `malloc` fails, `newNode` will be `NULL`. In such cases, it's essential to handle the error to avoid undefined behavior in your program.

3. **Initialize Node:**

```c
newNode->value = newValue;           
newNode->next_node = *head;          
```

The `value` is set to the new value you want to store. The `next_node` is set to the current head of the list, effectively linking the new node to the existing list.

4. **Update Head:**

```c
*head = newNode;
```

The **head** pointer is updated to point to the new node. This action places the new node at the beginning of the list.

**Why Add to the Beginning?**

Adding elements to the beginning of a linked list is efficient with a **time complexity of O(1)** because it involves only a few pointer assignments. This operation is often preferred when the goal is to build a list incrementally or when the order of insertion is important.

### Adding a node at the end of a singly Linked List

:warning: **NOTE:** :warning:  In this example, to enhanced the code in overall **the three first steps** are going to be merged into a single function `creatNode`. It helps with:

   - **Code Reusability:** since this function can be redone as much as needed. 

   - **Code Clarity:** The function `addNodeAtEnd` is more focused and easier to read since the logic of the creation of a node is encapsulated in its own. 

   - **Maintainability:** If the node creation logic changes (initializing additional fields, or handle errors differently), only the function `createNode` need to be updated. All other function using it will be automatically benefit from these changes.
   
   - **Error Handling:** The `createNode` function can include error handling for memory allocation failures, making it easier to manage such errors in a centralized place. 
   
   - **Avoid Mistakes:** Since the functin is already done, no risk to make a mistake like forgetting a `;` or else while repeating it.

**Objective:** Add a new element to the end of a singly linked list.

**Detailed Steps:**

   **1.1 Memory Allocation for the New Node:** (Merge in a function)

   - Use `malloc` to allocate memory for a new node. This memory is required to store the new node's data and its pointer to the next node.

   **1.2  Check for Successful Memory Allocation:** (Merge in a function)

   - After allocation, it is crucial to verify if the memory allocation was successful. If `malloc` returns `NULL`, it indicates a **failure to allocate memory**, and appropriate **error handling should be implemented.**

   **1.3  Initialize the New Node:** (Merge in a function)

   - Set the value of the new node to the value you want to add to the list. Set the `next_node pointer` of the new node to point to the **current head** of the list. This step links the new node to the existing list.

   **2. Create a new Node using the function `createNode`:**
   
   - Create a new node with the specified data and assigns its address to `newNode`, allowing us to use this pointer to manipulate the newly created node in the linked list.

   **3. Check if the List is Empty:**

   - If the list is empty (aka **head** pointer is `NULL`), make the new node the **head** of the list.

   **4. Traverse the End of the List:**

   - If the list is not empty, use a temporaru pointer to traverse to the last node.
  
   **5. Insert the New Node:**

   -  Update the `next_node` pointer of the last node to point to the new node.

   **6. End of Operation:**
   
   - Ensure the new node's `next_node` pointer is set to `NULL` to mark the end of the list.


*Full Example (with explanation below):*

```c
#include <stdio.h>
#include <stdlib.h>

/** Definition of the Linked_List_Node structure */
typedef struct Linked_List_Node 
{
	int data; /** Data stored in the node */
	struct Linked_List_Node *next_node; /** Pointer to the next node in the list */
} Linked_List_Node;

/** Step 1: Function to create a new node with the given data */
Linked_List_Node* createNode(int data) 
{
	/** Step 1.1 Allocate memory for the new node */
	Linked_List_Node *newNode = (Linked_List_Node *)malloc(sizeof(Linked_List_Node));
	if (newNode == NULL) 
	{
		/** Step 1.2 Memory allocation failed */
		printf("Memory allocation failed!\n");
		exit(1);
	}

	/** Step 1.3 Initialize the new node */
	newNode->data = data; /** Set the data for the new node */
	newNode->next_node = NULL; /** Set the next_node pointer to NULL */

	return newNode; /** Return the newly created node */
}

/** Function to add a node with the given data to the end of the linked list */
void addNodeAtEnd(Linked_List_Node **head, int data) 
{
	/** Step 2: Create a new node */
	Linked_List_Node *newNode = createNode(data);

	/** Step 3: Check if the list is empty */
	if (*head == NULL) 
	{
		/** List is empty, so make the new node the head */
		*head = newNode;
	} 
	else 
	{
		/** List is not empty, traverse to the end */
		Linked_List_Node *currentNode = *head;
		
		/** Step 4: Traverse to the last node */
		while (currentNode->next_node != NULL) 
		{
			currentNode = currentNode->next_node;
		}
		
		/** Step 5: Insert the new node at the end */
		currentNode->next_node = newNode; /** Update the last node's next_node to point to the new node */

		/** 
		 * Step 6: End of operation
		 * Newnode is set by default on "NULL" in the `createNode` function no need to initialized it again
		 */
	}
}

```

**Explanation of the Code**



1/2 **Create a new node:**
   
```c
/** Step 1: Function to create a new node with the given data */
Linked_List_Node* createNode(int data) 
{
	/** Step 1.1 Allocate memory for the new node */
	Linked_List_Node *newNode = (Linked_List_Node *)malloc(sizeof(Linked_List_Node));
	if (newNode == NULL) 
	{
		/** Step 1.2 Memory allocation failed */
		printf("Memory allocation failed!\n");
		exit(1);
	}

	/** Step 1.3 Initialize the new node */
	newNode->data = data; /** Set the data for the new node */
	newNode->next_node = NULL; /** Set the next_node pointer to NULL */

	return newNode; /** Return the newly created node */
}
```

This function creates a new node, sets its `data` field, and initializes its `next_node` pointer to `NULL`. It returns a pointer to the newly created node.

3. **Check if the list is Empty:**

```c
/** Step 3: Check if the list is empty */
	if (*head == NULL) 
	{
		/** List is empty, so make the new node the head */
		*head = newNode;
	} 
	else 
	{
		/** List is not empty, traverse to the end */
		Linked_List_Node *currentNode = *head;

		/** Step 4 code */
	}
```

If the head pointer is `NULL`, it means the list is empty. The new node becomes the head of the list. Because there is no begining and no end.

4. **Traverse to the End of the list:**

```c
/** Step 3 code */
else 
	{
		/** List is not empty, traverse to the end */
		Linked_List_Node *currentNode = *head;
		
		/** Step 4: Traverse to the last node */
		while (currentNode->next_node != NULL) 
		{
			currentNode = currentNode->next_node;
		}      
	}
```

If the list is not empty, traverse the list using a temporary pointer `currentNode` until you reach the last node (where `next_node` is `NULL`).

5. **Insert the New Node:**

```c
/** Step 5: Insert the new node at the end */
currentNode->next_node = newNode; /** Update the last node's next_node to point to the new node */
```

Update the `next_node` pointer of the last node to point to the new node. This effectively adds the new node at the end of the list.

6. **End of Operations:**

Since in the `createNode` function we stated that `next_node` pointed to `NULL` by default and we initialize where it point each time we create one, then the newly created node point automatically to `NULL`. Showing that it's the end of the list.

**Why Add to the Beginning?**

Adding a node at the end of a linked list is a common operation when building or modifying a list. This operation ensures that new data is apprended in the correct sequence. The time complexity of this operaion is **O(n)**, where `n` is the number of nodes in the list, due to the need to traverse the list to find the end.

### Removing a note at the begenning of a singly Linked List

**Objective:** Remove a specific node from the beginning of a singly linked list.

**Detailed steps:**

   1. **Check if the list is emmpty:**

      - Before attempting to remove a node, ensure the list is not empty. If the head pointer is `NULL`, the list is empty, and there's nothing to remove.

   2. **Store the node to be removed:**
   
      - Use a **TEMPORARY POINTER** to keep track of the node that will be removed. This pointer is needed to properly free the memory of the node.

   3. **Update the Head Pointer:**
      
      - Set the **Head pointer** to the next node in the list. This step effectively removes the first node from the list.

   4. **Free the Head Pointer:**

      - After updating the **head pointer**, free the memory allocated for the removed node. **WARNING: This step is crucial to avoid memory leaks.**

*Example (with full explanation below)*

```c
#include <stdio.h>
#include <stdlib.h>

/** Function to remove the first element from the beginning of the linked list */
void removeElement(Linked_List_Node **head) 
{
    /** Step 1: Check if the list is empty */
    if (*head == NULL) 
	{
        /** List is empty, nothing to remove */
        printf("The list is empty. No node to remove.\n");
        return;
    }

    /** Step 2: Store the node to be removed */
    Linked_List_Node *nodeToRemove = *head; /** The current head node */

    /** Step 3: Update the head pointer to the next node */
    *head = nodeToRemove->next_node; /** The head now points to the second node in the list */

    /** Step 4: Free the memory of the removed node */
    free(nodeToRemove); /** Release the memory allocated for the removed node */
}

```
**Explanation of the code**

1. **Check for Empty List:**

```c
/** Step 1: Check if the list is empty */
if (*head == NULL) 
{
	/** List is empty, nothing to remove */
	printf("The list is empty. No node to remove.\n");
	return;
}
```

This condition checks if the list is empty. If the **`head`** pointer is `NULL`, there are no nodes in the list to remove.

2. **Store the Node to be removed:**

```c
/** Step 2: Store the node to be removed */
Linked_List_Node *nodeToRemove = *head; /** The current head node */
```

A temporary pointer `nodeToRemove` is used to keep track of the node that will be removed. This is necessary to later free the memory allocated for this node.

3. **Update the Head Pointer:**

```c
/** Step 3: Update the head pointer to the next node */
*head = nodeToRemove->next_node; /** The head now points to the second node in the list */
```

The **`head`** pointer is updated to point to the next node in the list. By doing this, the original head node is effectively removed from the list.

4. **Free the Memory:**

```c
/** Step 4: Free the memory of the removed node */
free(nodeToRemove); /** Release the memory allocated for the removed node */
```

The `free` function releases the memory allocated for the removed node, which prevents memorys leaks and ensures efficient memory usage.

**Why remove from the Beginning?**

Removing nodes from the beginning of a singly linked list is efficient with a **time complexity of O(1)**. This is because it involves only a few pointer adjustements and memory deallocations, making it a quick operation. This approach is commonly used when maintaining the order of nodes or performing frequent insertions and deletions.

### Removing a node at the end of a singly linked list

**Objective:** Remove a specific node from the end of a singly linked list.

**Detailed steps:**

   1. **Check if the list is emmpty:**

      - Before attempting to remove a node, ensure the list is not empty. If the head pointer is `NULL`, the list is empty, and there's nothing to remove.

   2. **Check if the list contains onlye ONE node:**

   	- If the list contains only one node, remove it by setting the `head` to `NULL`. This node's `next_node` is already `NULL`, so there's no need for further adjustments.

   3. **Traverse to the Penultimate Node:**
      
      - If the list contains more than one node, traverse the list to find the node just before de last node (the penultimate node).

   4. **Remove the Last Node:**
   
      - Update the `next_node` of the penultimate node to `NULL`, effectively removing the reference to the last node en thereby removing it from the list.
  
      - Free the memory allocated for the last node. :warning: **WARNING: This step is crucial to avoid memory leaks.**

*Example (with full explanation below)*

```c
#include <stdio.h>
#include <stdlib.h>

/** Define the structure for a linked list node */
typedef struct Linked_List_Node 
{
    int data;
    struct Linked_List_Node *next_node;
} Linked_List_Node;

/** Function to remove a node at the end of the linked list */
void removeNodeAtEnd(Linked_List_Node **head) 
{
    /** Case 1: If the list is empty, there's nothing to remove */
    if (*head == NULL) 
	{
        printf("The list is empty. Nothing to remove.\n");
        return;
    }

    /** Case 2: If the list contains only one node */
    if ((*head)->next_node == NULL) 
	{
        free(*head);       /** Free the memory allocated for the node */
        *head = NULL;     /** Set head to NULL since the list is now empty */
        return;
    }

    /** Case 3: If the list contains more than one node */
    Linked_List_Node *current = *head;
    Linked_List_Node *previous = NULL;

    /** Traverse to the penultimate node */
    while (current->next_node != NULL) 
	{
        previous = current;
        current = current->next_node;
    }

    /** Remove the last node */
    previous->next_node = NULL; /** Update the penultimate node's next_node to NULL */
    free(current);              /** Free the memory allocated for the last node */
}

int main(void) 
{
    /** Example usage */
    Linked_List_Node *head = NULL; /** Start with an empty list */

    /** Code to add nodes to the list would go here */

    /** Remove a node from the end of the list */
    removeNodeAtEnd(&head);

    /** Code to print and verify the list would go here */

    return (0);
}


```
**Explanation of the code**

1. **Case 1: Empty List Check:**

```c
/** Case 1: If the list is empty, there's nothing to remove */
if (*head == NULL) 
{
	printf("The list is empty. Nothing to remove.\n");
	return;
}

```

If the list is empty, simply print a message and return, as there's no node to remove.

2. **Case 2: Single Node Case:**

```c
/** Case 2: If the list contains only one node */
if ((*head)->next_node == NULL) 
{
	free(*head);       /** Free the memory allocated for the node */
	*head = NULL;     /** Set head to NULL since the list is now empty */
	return;
}
```

If there is only one node, free its memory and set the `head` to `NULL`, making the list

3. **Case 3: Traverse to the Penultimate Node:**

```c
/** Case 3: If the list contains more than one node */
Linked_List_Node *current = *head;
Linked_List_Node *previous = NULL;

/** Traverse to the penultimate node */
while (current->next_node != NULL) 
{
	previous = current;
	current = current->next_node;
}
```

Traverse the list to reach the node just before the last node.

4. **Remove the Last Node and free:**

```c
/** Remove the last node */
previous->next_node = NULL; /** Update the penultimate node's next_node to NULL */
free(current);              /** Free the memory allocated for the last node */
```

Update the `next_mode` of the penultimate node to `NULL` and free the memory allocated for the last node.

**Why remove from the Beginning?**

Removing nodes from the end of a linked list is essential for efficient memory management, maintaining data integrity, and ensuring the list only contains relevant or recent data. It prevents memory leaks and manages the dynamic nature of the list by clearing obsolete entries

### Traversing a Linked List

**Objective:** Traverse through each node in a singly linked list and perform an action, such as printing the value of each node.

**Detailed Steps:**

1. **Check if the list is empty:**

- Ensure the list is not empty before startint the traversal. If the **head** pointer is `NULL`, there are no nodes to traverse.

1. **Initialize a temporary pointer:**

-  Use a temporary pointer to iterate through the list. Start this pointer at the **head** of the list.

2. **Iterate through the list:**

- Move through each node using the `next_node` pointer until reaching the end of the list (when the `next_node` is `NULL`).

3. **Perform actions on each node:**

- During traversal, you can perform various actions, such as printing node values or processing data.

4. **End of traversal:**

- Once the end of the list is reached, stop the traversal.

*Full example (with explanation)*

```c
#include <stdio.h>
#include <stdlib.h>

/** Definition of the Linked_List_Node structure */
typedef struct Linked_List_Node 
{
    int data; /** Data stored in the node */
    struct Linked_List_Node *next_node; /** Pointer to the next node in the list */
} Linked_List_Node;

/** Function to traverse and print all elements of the linked list */
void traverseList(Linked_List_Node *head) 
{
    /** Step 1: Check if the list is empty */
    if (head == NULL) 
	{
        /** List is empty, nothing to traverse */
        printf("The list is empty. Nothing to traverse.\n");
        return;
    }

    /** Step 2: Initialize a temporary pointer for traversal */
    Linked_List_Node *currentNode = head; /** Start from the head of the list */

    /** Step 3: Iterate through the list */
    while (currentNode != NULL)
	{
        /** Step 4: Perform actions on the current node to avoid any mismanipulation */
        printf("%d -> ", currentNode->data); /** Print the data of the current node */
        
        /** Move to the next node */
        currentNode = currentNode->next_node; /** Update the pointer to the next node */
    }

    /** End of list */
    printf("NULL\n"); /** Indicate the end of the list */
}

```

**Explanation of the Code**

1. **Check for Empty List:**

```c
if (head == NULL) 
{
	/** List is empty, nothing to traverse */
	printf("The list is empty. Nothing to traverse.\n");
	return;
}
```

As always, checking if the head is empty. If the `head` pointer is `NULL` then there are no nodes to traverse.

2. **Initialize a Temporary Pointer:**

```c
/** Step 2: Initialize a temporary pointer for traversal */
Linked_List_Node *currentNode = head; /** Start from the head of the list */
```

A temporary pointer `currentNode` is used to keep track of the curren node during traversal. It starts at the head of the list.

3. **Iterate through the list:**

```c
/** Step 3: Iterate through the list */
while (currentNode != NULL)
{ 
	/** code to perform on each node (see step 4)*/

		/** Move to the next node */
	currentNode = currentNode->next_node; /** Update the pointer to the next node */
}
``` 

This `while` loop continues to execute as long as `currentNode` is not `NULL`, which means there are more nodes to visit.

After performing action on each node (see next step)

Update the `currentNode` pointer to point to the next node in the list.

4. **Perform Actions on each node:**

```c
/** Step 4: Perform actions on the current node to avoid any mismanipulation */
printf("%d -> ", currentNode->data); /** Print the data of the current node */
```

Inside the loop, the data of the current node is printed. You can replace this action with any other operation you need to perform on each node.

5. **End of Traversal:**

```c
/** End of list */
printf("NULL\n"); /** Indicate the end of the list */
```

After exiting the loop, print `NULL` to indicate the end of the list.

**Why Traverse a List?**

Traversing a linked list is essential for various operations, such as displaying the list's contents, searching for specific values, or performing calculations based on node data. The **time complexity is O(n)**, where `n` is the number of nodes in the list. This operation is linear in nature, as each nnode must be visited once.


## Doubly linked list

The main difference between a singly linked list and a doubly linked list is the addition of a `previous_node` pointer in the doubly linked list. This additional pointer allows traversal in both directions: forward and backward.

### Similarities between Singly and Doubly linked list

1. **Basic Operations:**
   
	- Adding, removing, and traversing nodes involved similar steps in both types of lists. You still need to handle pointers carefully to maintain the integrity of the list.
  
2. **Node Creation and Deletion:**
   
   - The logic of creating and deleting nodes remains similar. Memory managements (allocation and deallocation) is essential in both cases.

3. **Iterative Operations:**
   
   - In both lists, you iterate through nodes using pointers. The traversal logic changes slightly due to the presence of the `prev_node` in doubly linked lists. 

### Differences between Singly and Doubly linked list

1. **Structure Definition:**
	
	- **Singly Linked List**
	
```c
typedef struct Linked_List_Node
{
	int data							/** Data store in the node */
	struct Linked_List_Node *next_node; /** Pointer to the next node */
} Linked_List_Node;
```
	
   - **Doubly Linked List**
  
```c
typedef struct Doubly_Linked_List_Node
{
	int data 									/** Data stored in the node */
	struct Doubly_Linked_List_Node *next_node; 	/** Pointer to the next node */
	struct Doubly_Linked_List_Node *prev_node;	/** Pointer to the previous node */
} Doubly_Linked_List_Node;
```
The key difference is the `prev_node` pointer in the doubly linked list, which allows the list to be traversed backward.

2. **Operations:**

	- **Adding a Node:**
    	- **At the Beginning:**
        	- **Singly Linked List:** Update the head to point to the new node and set the new node's  `next_node` to the previous head.
        	- **Doubly Linked List:** Update the head to point to the new node, set the new node's `next_node` to the previous head, and update the previous head's `prev_node` to the new node. Also, set the new node's `prev_node` to `NULL`
      	- **At the End:**
        	- **Singly Linked List:** Traverse to the end and update the last node's `next_node` to the new node. Set the new node's `next_node` to `NULL`.
        	- **Doubly Linked List:** Traverse to the end, update the last node's `next_node` to the new node, set the new node's `prev_node` to the last node, and the new node's `next_node` to `NULL`
	- **Removing a Node:**
    	- **At the Beginning:**
        	- **Singly Linked List:** Update the head to point to the seconde node. 
        	- **Doubly Linked List:** Update the head to point to the second node, set the new head's `prev_node` to `NULL`, and **free** the old head. 
      	- **At the End:**
        	- **Singly Linked List:** Traverse to the **Penultimate** node, set its `next_node` to `NULL`
        	- **Doubly Linked List:** Traverse to the **Penultimate** node, set its `next_node` to `NULL`, and the last node's `prev_node` to the **Penultimate** node. 

3. **Traversal:**
   
   - **Singly Linked List:** Only forward traversal is possible.
   
   - **Doubly Linked List:** Both forward and backward traversal are possible, thanks to the `prev_node` pointer. 

### Example Code for Doubly Linked List

Here is a breakdown of how you might handle a simple operation, like adding a node at the end, in a doubly linked list:

1. **Create and Initialiaze the New Node:**

```c
Doubly_Linked_List_Node *newNode = malloc(sizeof(Doubly_Linked_List_Node));
newNode->data = value;		 	/** Set node data */
newNode->next_node = NULL;	 	/** End of list */
newNode->prev_node = NULL;		/** Will be updated later */
```

2. **Traverse to the End:**
   
```c
Doubly_Linked_List_Node *current = head;
		/** Initialize a temporary pointer to the head of the list */

		/** Iterate through the list until reaching the last node */
while (current->next_node != NULL)	
		/** Continue while the next node is not NULL */
{
    current = current->next_node;
		/** Move the temporary pointer to the next node */
}

		/** At this point, 'current' points to the last node of the list */
```

3. **Update Pointers:**

```c
current->next_node = newNode; /** Update the old last node */
newNode->prev_node = current; /** Update new node's previous pointer */
```
4. **Update the Head (if needed):**

Only necessary if the list was empty initially and the new node becomes the head.

**Conclusion**

   - **Doubly Linked List** adds a `prev_node` pointer for bidirectional traversal, but operations like adding and removing nodes are similar, with added complexity in maintaining both `next_node` and `prev_node` pointers.
   - **Singly Linked List** is simpler, with only a `next_node` pointer, making it easier to implement but less versatil in terms of traversal an operations.

## Conclusion


## Author

Anne-Cécile Besse (Arc)