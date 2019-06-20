#include<stdio.h>
#include<stlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	char x = 'A';

	while (x <= 'Z')
	{
	putchar(x);
	x++;
	}
	putchar('\n');

	return (0);
}
