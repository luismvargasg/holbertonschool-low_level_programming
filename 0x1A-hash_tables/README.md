# 0x1A. C - Hash tables

> This directory contains all the tasks of the project "0x1A. C - Hash tables" at [Holberton School](https://www.holbertonschool.com "Holberton School.") for educational purpose.

## General Objectives

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Basic info

A hash function is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.

A hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.

For more information please visit / watch: [HashTable](https://www.youtube.com/watch?v=MfhjkfocRR0)

## Directory Files

| **File** | **Description** |
|----------|-----------------|
| [0. >>> ht = {}](./0-hash_table_create.c) | Write a function that creates a hash table. |
| [1. djb2](./1-djb2.c) | Write a hash function implementing the djb2 algorithm. |
| [2. key -> index](./2-key_index.c) | Write a function that gives you the index of a key. |
| [3. >>> ht['betty'] = 'holberton'](./3-hash_table_set.c) | Write a function that adds an element to the hash table. |
| [4. >>> ht['betty']](./4-hash_table_get.c) | Write a function that retrieves a value associated with a key. |
| [5. >>> print(ht)](./5-hash_table_print.c) | Write a function that prints a hash table. |
| [6. >>> del ht](./6-hash_table_delete.c) | Write a function that deletes a hash table. |
| [7. $ht['Betty'] = 'Holberton'](./100-sorted_hash_table.c) | Rewrite the previous functions using another data structures. |

## Author

* [GitHub - Luis Miguel Vargas](https://github.com/luismvargasg)

* [LinkedIn - Luis Miguel Vargas](https://www.linkedin.com/in/luismvargasg/)
