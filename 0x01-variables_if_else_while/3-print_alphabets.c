#include<stdio.h>
#include<stlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
	putchar(i);
	i++;
	}
	int x = 65;

	while (x <= 90)
	{
	putchar(x);
	x++;
	}
	putchar('\n');

	return (0);
}
