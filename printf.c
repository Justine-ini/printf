#include "main.h"
/**
 * _printf - Prints formatted output to the console
 * @format: Format string containing the desired output format
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int count = 0;

	va_start(list, format);
	if (format != NULL)
		count = print_formatted_output(format, list);
	va_end(list);

	return (count);
}
/**
 * print_formatted_output - Handles the formatted output based
 * on the format string
 * @format: Format string containing the desired output format
 * @list: Variable argument list
 *
 * Return: Number of characters printed
 */
int print_formatted_output(const char *format, va_list list)
{
	unsigned int i, count = 0;
	char *str;

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += _putchar(va_arg(list, int));
			else if (format[i] == 's')
			{
				str = va_arg(list, char *);
				count += _puts(str);
			}
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'd' || format[i] == 'i')
				count += handle_d(va_arg(list, int));
			else if (format[i] == 'u')
				count += handle_u(va_arg(list, unsigned int));
			else if (format[i] == 'o')
				count += handle_o(va_arg(list, unsigned int));
			else if (format[i] == 'x')
				count += handle_x(va_arg(list, unsigned int));
			else if (format[i] == 'X')
				count += handle_X(va_arg(list, unsigned int));
			else
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				count += 2;
			}
		}
		else
			count += _putchar(format[i]);
	}

	return (count);
}

int handle_d(long int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / 10 == 0)
	{
		_putchar(num + '0');
		return (1);
	}
	count += handle_d(num / 10);
	_putchar(num % 10 + '0');
	count++;

	return (count);
}
