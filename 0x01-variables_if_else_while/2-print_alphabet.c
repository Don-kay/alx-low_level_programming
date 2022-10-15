#include <stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char hc;

	for (hc = 'a'; hc <= 'z'; hc++)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);
}
