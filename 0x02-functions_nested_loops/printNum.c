#include "holberton.h"

void printNum(int i)
{
        if ( i < 0)
        {
                _putchar('-');
                i = -i;
        }

        if (i > 99)
        {
                _putchar((i / 100) + 48);
                i = i - (i / 100);
        }
        if ( i > 9)
        {
        _putchar((i / 10) + 48);
        }

        _putchar((i % 10) + 48);


}
