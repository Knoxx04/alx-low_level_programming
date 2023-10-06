#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	for (; start <= end; start++)
	{
		if (char != 'q' || 'e')
		{
			putchar(start);
		}
	}
	putchar('\n');
	return (0);
}
