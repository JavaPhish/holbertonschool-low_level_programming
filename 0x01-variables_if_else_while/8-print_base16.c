#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (char x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
