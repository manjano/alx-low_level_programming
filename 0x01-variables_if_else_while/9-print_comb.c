#include <stdio.h>
/**
 * main - A program that prints all combinations of single digit numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
