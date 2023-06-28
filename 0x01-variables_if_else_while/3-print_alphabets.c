#include <stdio.h>
/**
 * main - will print alphaBETS
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char lowerbet;
	char alphabet;

	for (lowerbet = 'a'; lowerbet <= 'z'; lowerbet++)
	{
		putchar(lowerbet);
	}
	for (alphabet <= 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
