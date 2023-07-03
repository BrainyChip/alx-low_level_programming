#include <stdio.h>
/**
 * main - print decimals without using char
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
