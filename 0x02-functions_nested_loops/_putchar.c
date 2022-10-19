#include "main.h"
#include "unistd.h"

/**
 * main -writes the char c to stdout
 * @c: print char c
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
