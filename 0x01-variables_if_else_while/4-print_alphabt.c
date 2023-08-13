#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
	char ch = 'z';

	while (ch <= 'a')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

