#include <stdio.h>
/**
 * main - A program that prints combinations of three numbers
 * Return: 0 (successful)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 74; x < 84; x++)
	{
		for (y = 74; y < 84; y++)
		{
			if (y > x)
			{
				for (z = 74; z < 84; z++)
				{
					if (z > y)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if (x == 81 && y == 82 && z == 83)
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
