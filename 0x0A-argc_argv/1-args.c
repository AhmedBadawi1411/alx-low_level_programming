#includ<stdio.h>
/**
 * main - Entry point - Function to print the number of arguments passed into it.
 * @argc: number of args.
 * @argv: value of args.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
