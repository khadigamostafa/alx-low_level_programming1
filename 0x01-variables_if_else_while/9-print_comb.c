#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
	int char_c = 0;

	while (char_c <= 9)
	{
		putchar(char_c + 48);
		if (char_c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		char_c++;
	}
	putchar('\n');
	return (0);
}

