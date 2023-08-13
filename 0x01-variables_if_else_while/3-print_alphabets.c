#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
	char ch = 'a';
	char ch_c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch_c <= 'Z')
	{
		putchar(ch_c);
		ch_c++;
	}
	putchar('\n');
	return (0);
}

