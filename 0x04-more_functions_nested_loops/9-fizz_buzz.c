#include "holberton.h"
#include "stdio.h"


/**
 * main - runs fizz_buzz
 *
 * Return: 0 - success
 */
int main(void)
{
	fizz_buzz();

	return (0);
}

/**
 * fizz_buzz - prints 1 - 100 and fizz and buzz in place of 3 and 5 multiples
 */
void fizz_buzz(void)
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
			printf("Buzz ");
		}
		else
		{
			printf("%d%s", loop1, " ");
		}
	}

	putchar('\n');

}
