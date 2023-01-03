#include <stdio.h>
/**
 * main - A program that prints lowercase alphabets in reverse order
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
