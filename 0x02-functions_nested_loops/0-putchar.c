#include "main.h"
/**
 * main - the main function
 * _putchar - write the character c to stdout
 *@c: the character to print
 *Return: on success 0
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch=0; ch<8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return(0);
}
