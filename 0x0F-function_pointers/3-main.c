#include "3-calc.h"

/**
 * main- pragram that perform simple calculation
 * @argc: number arguments
 * @argv: number of arguments
 *
 * Return: no number.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, sum;
	char n;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[2]);
	arg2 = atoi(argv[1]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	n = *argv[2];

	if (n  == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	sum = func(arg1, arg2);

	printf("%d\n", sum);

	return (0);
}
