#ifndef _FILE_NAME_H
#define _FILE_NAME_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int(*cmp)(int));
char _putchar(int);
#endif
