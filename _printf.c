#include "main.h"

/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0, i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0' && get_op(format[i + 1]))
		{
			func = get_op(format[i + 1]);
			count += func(ap);
			i += 2;
			continue;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}

	va_end(ap);
	return (count);
}
