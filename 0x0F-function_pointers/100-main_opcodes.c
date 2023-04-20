#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, h;
	char *r;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	r = (char *)main;

	for (h = 0; h < b; h++)
	{
		if (h == b - 1)
		{
			printf("%02hhx\n", arr[h]);
			break;
		}
		printf("%02hhx ", r[h]);
	}
	return (0);
}
