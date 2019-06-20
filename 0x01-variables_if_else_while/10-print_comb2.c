#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cheese[2];
	int num = 48;
	int loop1;
	int loop2;
	int putVar = 0;

	cheese[0] = 44;
	cheese[1] = 32;


	while (putVar < 2)
	{
		putchar('0');
		putVar++;
	}
	putVar = 0;

	for (loop1 = 1; loop1 < 10; loop1++)
	{
		for (loop2 = 0; loop2 < 10; loop2++)
		{
			while (putVar < 2)
			{
				putchar(cheese[putVar]);
				putVar++;
			}
			putchar(loop1 + 48);
			putchar(loop2 + 48);
			putVar = 0;
		}
	}


	putchar('\n');

	return (0);
}
