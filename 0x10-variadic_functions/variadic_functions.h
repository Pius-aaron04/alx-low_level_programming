#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * speci - new name for specifiers
 */
typedef struct specifiers speci;

/**
 * struct specifiers - contains specfier symbols
 * @symbol: specifier symbol
 * @specifier: specifier
 */

struct specifiers
{
	char symbol;
	char specifier;
};
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
