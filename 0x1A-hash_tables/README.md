# C - Hash tables

In this project, I learned about hashing by implementing hash functions
and hash tables in C.

## Header File :file_folder:

* [hash_tables.h](./hash_tables.h): Header file containing definitions and prototypes for
all types and functions written for the project.

## Files
All of the following files are scripts and programs written in C:

| File | Prototype | Description |
| --- | --- | ----------- |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` | Function that creates a hash table |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` | Function that executes the djb2 algorithm |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` | Function that returns the index of a key |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` | Function that adds an element to the hash table |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` | Function that retrieves a value associated with a key |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` | Function that prints a hash table |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` | Function that deletes a hash table |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);` | C file with some functions that implements a hash table with a sorted linked list |
| | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` |
| | `char *shash_table_get(const shash_table_t *ht, const char *key);` |
| | `void shash_table_print(const shash_table_t *ht);` |
| | `void shash_table_print_rev(const shash_table_t *ht);` |
| | `void shash_table_delete(shash_table_t *ht);` |
