#include <stdio.h>

/**
 * main- entry point
 * @void: null value
 *
 * Description: This program program that prints all possible combinations of two two-digit numbers or just print numbers from 00 to 99
 * Return: zero value
 */

int main(void)
{
	int i = 0;
	int j;
	int count = 0;

	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
			count++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
