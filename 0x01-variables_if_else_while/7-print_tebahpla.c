#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	for (; end >= start; end--)
	{
		putchar(end);
	}
	putchar('\n');
	return (0);
}
