#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 *
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int t, cnt;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (t >= cents[i])
				{
					cnt += t / cents[i];
					t = t % cents[i];
				}
			}
		}
		if (t == 1)
			cnt++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cnt);
	return (0);
}
