#include <stdio.h>
/**
 * main - print alphabets in a reverse manner
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
