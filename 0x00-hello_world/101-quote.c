#include <stdio.h>
#include <unistd.h>
/**
 * main - printing without puts and printf
 *
 * Return: always (1)
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-1\n", 59);
	return (1);
}
