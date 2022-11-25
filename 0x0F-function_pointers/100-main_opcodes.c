#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, n;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (n = 0; n < bytes; n++)
	{
		printf("%02x", arr[n] & 0xFF);
		if (n != bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
