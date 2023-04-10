#include <stdio.h>
/**
 * main - Entry point.
 * @argc: input.
 * @argv: input.
 * 
 * Description: prints all argument it receives.
 * Return: Always 0 (Success)
 */
int mani(int argc, char *argv[])
{
	int count;
	
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
