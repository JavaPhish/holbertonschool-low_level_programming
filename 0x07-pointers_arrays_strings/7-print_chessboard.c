#include "holberton.h"

/**
 * print_chessboard - prints an array 8 x 8 chessboard
 * @a: The chess board
 */
void print_chessboard(char (*a)[8])
{
	int loop, loop2;

	loop = 0;
	while (loop != 8)
	{
		loop2 = 0;
		while (loop2 != 8)
		{
			_putchar(a[loop][loop2]);
			loop2++;
		}
		_putchar('\n');

		loop++;
	}
}

