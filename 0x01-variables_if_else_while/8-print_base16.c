#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int u;
	char b;

	for (u = 48; u < 58; u++)
		putchar(u);

	for (b = 'a'; b <= 'f'; b++)
	putchar(b);

	putchar('\n');

	return (0);
}
