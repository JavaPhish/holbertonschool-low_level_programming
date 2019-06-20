#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cheese[2];
	int num;
	int i;

	cheese[0] = 44;
	cheese[1] = 32;
	num = 48;
	putchar(num);
	num++;
	while (num < 58)
	{
		i = 0;

		while (i < 2)
		{
		putchar(cheese[i]);
		i++;
		}
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
