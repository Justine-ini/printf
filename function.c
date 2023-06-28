#include "main.h"
/**
 * handle_u - Handles unsigned integers and prints them in decimal format.
 * @num: The unsigned integer to handle.
 *
 * Return: The number of digits printed.
 */
int handle_u(unsigned int num)
{
	int count = 0;

	if (num / 10 == 0)
	{
		_putchar(num + '0');
		count++;
		return (0);
	}
	count += handle_u(num / 10);
	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * handle_o - Handles unsigned integers and prints them in octal format.
 * @num: The unsigned integer to handle.
 *
 * Return: The number of digits printed.
 */
int handle_o(unsigned int num)
{
	int count = 0;

	if (num / 8 == 0)
	{
		_putchar(num + '0');
		count++;
		return (1);
	}
	count += handle_o(num / 8);
	_putchar(num % 8 + '0');
	count++;

	return (count);
}

/**
 * handle_x - Handles unsigned integers & prints lowercase hexadecimal format.
 * @num: The unsigned integer to handle.
 *
 * Return: The number of digits printed.
 */
int handle_x(unsigned int num)
{
	int count = 0;
	char hexChars[] = "0123456789abcdef";

	if (num / 16 == 0)
	{
		_putchar(hexChars[num]);
		count++;
		return (1);
	}
	count += handle_x(num / 16);
	_putchar(hexChars[num % 16]);
	count++;

	return (count);
}

/**
 * handle_X - Handles unsigned integers & prints uppercase hexadecimal format.
 * @num: The unsigned integer to handle.
 *
 * Return: The number of digits printed.
 */
int handle_X(unsigned int num)
{
	int count = 0;
	char hexChars[] = "0123456789ABCDEF";

	if (num / 16 == 0)
	{
		_putchar(hexChars[num]);
		count++;
		return (1);
	}

	count += handle_X(num / 16);
	_putchar(hexChars[num % 16]);
	count++;

	return (count);
}
