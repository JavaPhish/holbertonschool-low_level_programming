#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints all numbers passed on with a specifed seperator
 * @separator: The char* to seperate each word
 * @n: The numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int loop;
	va_list args;

	if (n)
	{
		va_start(args, n);


		for (loop = 0; loop < (int)n; loop++)
		{
			if (loop != 0 && separator != NULL)
				printf("%s", separator);

			printf("%d", va_arg(args, int));
		}
		printf("\n");
		va_end(args);
	}
}
