#include <stdio.h>

/**
 * main- enter Entry point
 * @void:  enter Null value
 *
 * Description:  To print numbers from 0 to 9 separated by comma and space
 * Return:  a zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
