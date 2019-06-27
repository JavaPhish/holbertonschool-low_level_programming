#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "Holberton";
	int loop = 0;

	for (; loop < 9; loop++)
	{
		_putchar(word[loop]);
	}
		_putchar('\n');

	return (0);
}
