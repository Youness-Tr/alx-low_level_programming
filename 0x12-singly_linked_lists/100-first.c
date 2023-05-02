#include <stdio.h>


void _const(void) __attribute__ ((constructor));

/**
 * const - prints a sentence before the main
 * Return: void
 */
void _const(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
