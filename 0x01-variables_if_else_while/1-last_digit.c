#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%s%d%s%d", "Last digit of ", n, " is ", n % 10);
	if (n > 5)
	{
		printf("%s", " and is greater than 5\n");
	}
	else
	if (n < 6 && n != 0)
	{
		printf("%s", " and is less than 6 and not 0\n");
	}
	else
	{
		printf("%s", " and is 0\n");
	}
	return (0);
}
