Hash Table Project
This project implements a hash table data structure using chaining collision handling. The following data structures are used:

struct hash_node_s
This struct represents a node of a hash table. It has the following members:

key: The key, a string (unique in the hash table)
value: The value corresponding to the key
next: A pointer to the next node of the list (used for chaining)
struct hash_table_s
This struct represents the hash table data structure. It has the following members:

size: The size of the array
array: An array of size size, where each cell is a pointer to the first node of a linked list
Tasks
Task 0: hash_table_create
Prototype: hash_table_t *hash_table_create(unsigned long int size)
Creates a hash table with the specified size.
Returns a pointer to the newly created hash table.
If an error occurs, the function returns NULL.
Task 1: hash_djb2
Prototype: unsigned long int hash_djb2(const unsigned char *str)
Implements the djb2 hash function algorithm.
Returns the hash value for the given string.
Task 2: key_index
Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size)
Calculates the index at which a key/value pair should be stored in the hash table array.
Uses the hash_djb2 function to compute the hash value.
Returns the index value.
Task 3: hash_table_set
Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value)
Adds an element to the hash table or updates the value associated with a key.
The key cannot be an empty string.
The value must be duplicated (a new copy is created).
Returns 1 if the operation succeeded, 0 otherwise.
In case of a collision, the new node is added at the beginning of the linked list.
Task 4: hash_table_get
Prototype: char *hash_table_get(const hash_table_t *ht, const char *key)
Retrieves the value associated with a given key in the hash table.
Returns the value associated with the key, or NULL if the key couldn't be found.
Task 5: hash_table_print
Prototype: void hash_table_print(const hash_table_t *ht)
Prints the contents of the hash table.
The key/value pairs are printed in the order they appear in the array of the hash table.
The format is as follows: {'key': 'value', 'key': 'value', ...}
If the hash table is NULL, nothing is printed.
Note: Make sure to include the necessary header file hash_tables.h in your source files.

Feel free to use the provided main files (0-main.c, 1-main.c, etc.) to test your implementation of each task.

Author: Glamour Maphanga

Date: 08/06/2023
