#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * File: function_pointers.h
 * Auth: King CEO
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-function_pointers directory.
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
