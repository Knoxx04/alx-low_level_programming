#include "main.h"
/**
  * print_alphabet - Make the alphabet
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
