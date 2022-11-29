#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: character to be printed
 * Return: On success 1
 */

int _putchar(c)
{
	return(write(1, &c, 1));
}
