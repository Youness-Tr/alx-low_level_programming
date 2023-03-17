#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: print the last number and tell us is it positive or negative.
 *Return: always 0
 */

int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastn = n % 10;
		if (lastn > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
		}
		else if (lastn == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastn);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
		}
		return (0);
}
