
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for unction main goes there */
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
if (n == 0)
{
printf("%d", n, "is zero");
}
else if (n > 0)
{
printf("%d", n, "is positive");
}
else
{
printf("%d", n, "is negative");
}
return (0);
}
