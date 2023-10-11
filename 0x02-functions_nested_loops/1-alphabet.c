#include "main.h"
/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char min = 'a';

		while (min <= 'z')
		{
			_putchar(min);
			min++;
		}
	_putchar('\n');
}
