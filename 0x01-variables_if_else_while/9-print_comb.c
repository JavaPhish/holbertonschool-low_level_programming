#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cheese[2];

	cheese[0] = 32;
	cheese[1] = 44;
	int num = 48;

	putchar(num);
	num++;
	while (num < 58)
	{
		int i = 0;

		while (i < 2)
		{
		putchar(cheese[i]);
		i++;
		}
		putchar(num);
		num++;
	}
	putchar('\n');
}
