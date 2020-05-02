# 0x17. C - Doubly linked lists

> This directory contains all the tasks of the project "0x17. C - Doubly linked lists" at Holberton School.

> Project made at [Holberton School](https://www.holbertonschool.com "Holberton School.") for educational purpose.

## General Objectives

* What is a doubly linked list
* How to use doubly linked lists

## Basic info

A Doubly Linked List has the same structure of a singly linked list plus an extra pointer in every node that points to the previous node. So it can be traversed in both forward and backward direction.
Because of that new pointer, we require some extra space, making the list heavier.

This time, the first node (Head) of the double linked list has its previous link pointing to NULL, similarly the last node of the list has its next node pointing to NULL.

### Struct example:
```
struct node
{
	int data;	// Data
	node *prev;  	// A reference to the previous node
	node *next; 	// A reference to the next node
};
```
## Directory Files

| **File** | **Description** |
|----------|-----------------|
| [0. Print list](./0-print_dlistint.c) | Write a function that prints all the elements of a dlistint_t list. |
| [1. List length](./1-dlistint_len.c) | Write a function that returns the number of elements in a linked dlistint_t list. |
| [2. Add node](./2-add_dnodeint.c) | Write a function that adds a new node at the beginning of a dlistint_t list. |
| [3. Add node at the end](./3-add_dnodeint_end.c) | Write a function that adds a new node at the end of a dlistint_t list. |
| [4. Free list](./4-free_dlistint.c) | Write a function that free a dlistint_t list. |
| [5. Get node at index](./5-get_dnodeint.c) | Write a function that returns the nth node of a dlistint_t linked list. |
| [6. Sum list](./6-sum_dlistint.c) | Write a function that returns the sum of all the data (n) of a dlistint_t linked list. |
| [7. Insert at index](./7-insert_dnodeint.c) | Write a function that inserts a new node at a given position. |
| [8. Delete at index](./8-delete_dnodeint.c) | Write a function that deletes the node at index index of a dlistint_t linked list. |
| [9. Crackme4](./100-password) | Find the password for crackme4. |
| [10. Palindromes](./102-result) | A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99. |
| [11. crackme5](./103-keygen.c) | Write a keygen for crackme5. |

## Author

* [GitHub - Luis Miguel Vargas](https://github.com/luismvargasg)

* [LinkedIn - Luis Miguel Vargas](https://www.linkedin.com/in/luismvargasg/)