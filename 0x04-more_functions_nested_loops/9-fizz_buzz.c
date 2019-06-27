
#include <stdio.h>
#include "holberton.h"

/**
 * main - runs fizz_buzz
 *
 * Return: 0 - success
 */
int main(void)
{
	int loop1;

	for (loop1 = 1; loop1 < 101; loop1++)
	{
		if ((loop1 % 3) == 0 && (loop1 % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((loop1 % 3) == 0)
		{
			printf("Fizz ");
		}
			else if ((loop1 % 5) == 0)
		{
			if (loop1 == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d%s", loop1, " ");
		}
	}

	putchar('\n');


	return (0);
}

