#include <stdio.h>
/**
 * main -Entry point
 *
 * Desc: Fizz_buzz
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		i++;
		putchar(i);
	}
	putchar('\n');

	if (i % 3 == 0)
	{
		putchar("Fizz");
	}
	else if (i % 5 == 0)
	{
		putchar("Buzz");
	}
	else if (i % 3 && 1 % 5 == 0)
	{
		putchar("FizzBuzz")
	}
}
