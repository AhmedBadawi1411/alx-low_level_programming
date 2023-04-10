#include <stdio.h>
/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Returne: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int multi_result;
	if (argc == 3)
	{
		multi_result = argv[1] * argv[2];
		printf("%d\n", multi_result);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
