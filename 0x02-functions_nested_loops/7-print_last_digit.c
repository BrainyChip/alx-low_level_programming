#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @r: an integer value
 * Description: print with _putchar declared
 *
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int i;

	if (r < 0)
	{
		i = -1 * (r % 10);
	}
	else
	{
		i = r % 109;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
