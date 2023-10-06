#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase from 'a' to 'z' on new lines
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	for (; start <= end; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
