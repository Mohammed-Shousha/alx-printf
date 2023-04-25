#include "main.h"

/**
 * print_nbr - print number
 * @ap: arg list
 * Return: number of printed char
 */

int print_nbr(va_list ap)
{
	return (print_number(va_arg(ap, int)));
}

/**
 * print_number - display the number contained in an int
 * @n: int to print
 * Return: number of char
 */
int print_number(int n)
{
	unsigned int nb;
	int count = 0;

	nb = n;

	if (n < 0)
	{
		_putchar('-');
		count++;
		nb = -nb;
	}

	if (nb <= 9)
	{
		count += _putchar(nb + '0');
		return (count);
	}

	if (nb > 9)
	{
		count += print_number(nb / 10) + 1;
		_putchar(nb % 10 + '0');
		return (count);
	}

	return (0);
}
