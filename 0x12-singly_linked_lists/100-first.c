#include <stdio.h>

/**
 * print_quote - prints a quote
 * Return: no return
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

