#ifndef FUNCTION_POINTRES_H
#define FUNCTION_POINTERES_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_interator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
