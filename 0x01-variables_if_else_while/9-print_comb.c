#include <stdio.h>
/**
 * main - print set of single integer
 *
 * Return: 0
*/

int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
