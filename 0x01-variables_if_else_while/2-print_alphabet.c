#include <stdio.h>
/**
 * main - A program that prints the alphabet in lower case
 * Return: 0 (successful)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
