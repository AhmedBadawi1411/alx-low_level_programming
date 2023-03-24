#include <stdio.h>
#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: c -  Variable
 * Return: Always 0.
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 120 && c >= 97)
	{
		return (0);
	}
}
