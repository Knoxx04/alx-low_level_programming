#include "main.h"
/**
 *
 *
 * print_alphabet- Prints alphabet in lowercasem a to z followed by a newline
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
