#include <stdio.h>
/**
 * main - print out sizes of data types in c
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long)Sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)Sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)Sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)Sizeof(f));
	return (0);
}
