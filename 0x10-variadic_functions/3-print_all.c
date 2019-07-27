#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything to console
 * @format: The format to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int loop;
	char *word;

	va_start(args, format);
	loop = 0;
	while (format[loop] != '\0')
	{
		if (loop != 0 && (format[loop] == 'f'
			|| format[loop] == 'c'
			|| format[loop] == 's'
			|| format[loop] == 'i'))
			printf(", ");

		switch (format[loop])
		{
			case 'c':
				printf("%c", va_arg(args, int));
			break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				word = va_arg(args, char *);
				if (word == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s", word);

				break;
		}
	loop++;
	}
	printf("\n");
	va_end(args);
}
