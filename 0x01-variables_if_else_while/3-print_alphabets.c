#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase then uppercase then newline
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char start_l = 'a';
	char end_l = 'z';
	char start_c = 'A';
	char end_c = 'Z';

	for (; start_l <= end_l; start_l++)
	{
		putchar(start_l);
	}

	for (; start_c <= end_c; start_c++)
	{
		putchar(start_c);
	}
	putchar('\n');
	return (0);
}
