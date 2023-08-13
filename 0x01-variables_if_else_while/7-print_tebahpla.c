#include <stdio.h>
/**
 * main - the main function describes the main common in all c program
 *
 *Return: it is  always 0
 */
int main(void)
{
        int char_c = 'z';

        while (char_c >= 'a')
        {
                putchar(char_c);
                char_c--;
        }
	putchar('\n');
	return (0);
}

