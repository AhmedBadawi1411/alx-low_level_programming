#include <stdio.h>

/**
 * main- Entry point
 * @void : Null value
 *
 * Description: Print alphabet in reverse
 * Return: Zero value
 */

int main(void)
{

	char c;

	for (c = 'z'; c >= 'a' ; c--)
		putchr(c);
	putchar('\n');
	return (0);
}
