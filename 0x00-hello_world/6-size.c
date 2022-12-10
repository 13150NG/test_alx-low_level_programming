#include <stdio.h>
/**
 * main - single main block
 * program that prints the size of various data types on the computer it is compiled and run on
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of a int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
