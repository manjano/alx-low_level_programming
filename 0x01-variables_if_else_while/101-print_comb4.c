#include <stdio.h>
/**
 * main - A program that prints combinations of three numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int x;
	int a;
	int y;

	for (x = 74; x < 84; x++)
	{
		for (a = 74; a < 84; a++)
		{
			if (a > x)
			{
				for (y = 74; y < 84; y++)
				{
					if (y > a)
					{
					putchar(x);
					putchar(a);
					putchar(y);
					if (x == 81 && a == 82 && y == 83)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
