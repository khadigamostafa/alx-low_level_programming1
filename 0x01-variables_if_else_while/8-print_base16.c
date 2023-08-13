#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
	int char_c = 48;

	while (char_c <= 102)
	{
		putchar(char_c);
			if (char_c == 57)
				char_c = char_c + 39;
		char_c++;
	}
	putchar('\n');
	return (0);
}
