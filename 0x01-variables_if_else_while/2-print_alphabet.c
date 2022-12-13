#include <stdio.h>

/**
 * main - print some set of char
 *
 * Return: 0
*/
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar("\n");
	return (0);
}
