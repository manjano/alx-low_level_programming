#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase except e and q
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
