#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);


void add_nums(char *Finai_prod, char *next_prod, int next_len);
/**
 * find_len - Finds the length of a string.
 * @str: The string
 * Return: length of the string.
 */
int find_len(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
char *create_xarray(int size);

/**
 * create_xarray - create array of char
 * @size: the size of the array
 * Return: a pointer to the array
 */
char *create_xarray(int size)
{
	char *arr;
	int idx;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	exit(98);

	for (idx = 0; idx < (size - 1); idx++)
		arr[idx] = 'x';
	arr[idx] = '\0';
	return (arr);
}
char *iterate_zeroes(char *str);
/**
 * iterate_zeroes - itereate through a string of numbers
 * @str: the string
 * Return: pointer to the non zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return(str);
}

void get_prod(char prod, char *mult, int digit, int zeroes);
/**
 * get_prod - multiplies numbers
 * @prod: buffer to store results
 * @digit: single digit
 * @mult: string
 * @zeroes: number
 */
void get_prod(char prod, char *mult, int digit, int zeroes)
{
	int m, n, t = 0;

	m = find_len(mult) - 1;
	mult += m;

	while 

