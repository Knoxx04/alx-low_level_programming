#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz'\n'";

	for (c = 0; c <= 10; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
