#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: void
 */
int _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

