#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dc;

	for (dc = "a"; dc <= "z"; dc++)
	{
		putchar(dc);
	}
	for (dc = "A"; dc <= "Z"; dc++)
	{
		putchar(dc);
	}

	putchar('\n');
	return (0);
}
