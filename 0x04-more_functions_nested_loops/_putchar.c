#include "main.h"
#include <unistd.h>
/**
 * _putchar - writed the character c to stdout
 * @c: char
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}