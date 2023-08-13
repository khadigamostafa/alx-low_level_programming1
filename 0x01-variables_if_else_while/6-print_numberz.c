#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar("\n");
	return (0);
}
