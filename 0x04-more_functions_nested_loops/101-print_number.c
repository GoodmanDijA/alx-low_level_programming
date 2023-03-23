#include "main.h"

/**
 * print_numbers - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
		d = -d;
		_putchar('_');
	}

	if ((d / 10) > 0)
	{
		print_number(d / 10);
	}
	_putchar((d % 10) + '0');
}
