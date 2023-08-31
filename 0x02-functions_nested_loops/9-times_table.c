#include "main.h"

/**
 * times_table - a function that prints the nine times table, starting with 0
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			if (b == 0)
			{
				_putchar(c + '0');
			}

			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
