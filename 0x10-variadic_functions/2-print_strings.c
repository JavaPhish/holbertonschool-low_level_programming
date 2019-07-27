#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings to console using a valist
 * @separator: The char* to use to separate each string
 * @n: The list of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int loop;
	char *word;

	if (n)
	{
		va_start(args, n);

		for (loop = 0; loop < (int)n; loop++)
		{
			word = va_arg(args, char *);

			if (loop != 0 && separator != NULL)
				printf("%s", separator);

			if (word != NULL)
			{
				printf("%s", word);
			}
			else
			{
				printf("(nil)");
			}
		}

		printf("\n");

		va_end(args);
	}
}
