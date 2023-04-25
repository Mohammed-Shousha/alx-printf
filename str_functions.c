#include "main.h"

/**
 * print_char - print single char
 * @ap: arg list
 * Return: number of printed char
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	if (c == '\0')
		return (write(1, &c, 1));

	return (_putchar(c));
}

/**
 * print_str - print string
 * @ap: arg list
 * Return: number of printed char
 */
int print_str(va_list ap)
{
	char *argument = va_arg(ap, char *);

	if (!argument)
		return (_puts("(null)"));

	return (_puts(argument));
}

/**
 * print_percent - print percent character
 * @ap: arg list (unused)
 * Return: percent character
 */
int print_percent(va_list ap __attribute__((unused)))
{
	return (_putchar('%'));
}
