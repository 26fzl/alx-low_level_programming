#include <stdio.h>

/**
 * before_main - prints a sentence before the main
 * Return: no return
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

