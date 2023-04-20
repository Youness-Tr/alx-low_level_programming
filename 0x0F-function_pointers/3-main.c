#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point, This fuction perform a calulaction base on 2 numbers and
 * the given operator.
 * @argc: number of agruments
 * @argv: the string value of the arguments.
 *
 * Return: 0 (on Sucess)
 */
int main(int argc, char *argv[])
{
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opt = get_op_func(argv[2]);

	if (!opt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
