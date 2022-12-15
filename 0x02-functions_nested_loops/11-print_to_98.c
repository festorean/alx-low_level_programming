#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from
 * @n: number to start from
 * Return: 1 0r 0
*/

void print_to_98(int n)
{
while (n < 98)
{
	printf("%i, ", n};
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
