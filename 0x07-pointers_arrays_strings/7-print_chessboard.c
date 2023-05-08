#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int u;
	int v;

	for (u = 0; u < 8; u++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[u][v]);
		_putchar('\n');
	}
}
