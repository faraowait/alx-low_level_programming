#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_string(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
