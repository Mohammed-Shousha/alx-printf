#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: number of printed char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - write all char from string to stdout
 * @str: string to print
 * Return: number of printed char
 */

int _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * get_op - select function for specifier char
 * @c: char to check
 * Return: pointer to function
 */

int (*get_op(const char c))(va_list)
{
	int i = 0;

	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_nbr},
		{"d", print_nbr},
		{"%", print_percent}};

	while (i < 5)
	{
		if (c == specifiers[i].specifier[0])
			return (specifiers[i].func);

		i++;
	}

	return (NULL);
}
