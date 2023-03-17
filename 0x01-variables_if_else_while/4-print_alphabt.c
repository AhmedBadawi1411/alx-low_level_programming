#include <stdio.h>

/**
 * main : Entry point
 * @void : Null value
 *
 * Description: write the alphbet in lower case excepect q , n
 * Return: zero
 */

int main (void)
{

	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
