#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Festus
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
