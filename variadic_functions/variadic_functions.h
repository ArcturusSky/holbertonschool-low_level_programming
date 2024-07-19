#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdio.h>


int sum_them_all(const unsigned int n, ...);
/** Function that returns the summ of all its parameters */

void print_numbers(const char *separator, const unsigned int n, ...);
/** Function that prints numbers, followed by a new line. */

void print_strings(const char *separator, const unsigned int n, ...);
/** Function that prints strings, followed by a new line. */

void print_all(const char * const format, ...);
/** Function that prints anything */

#endif
