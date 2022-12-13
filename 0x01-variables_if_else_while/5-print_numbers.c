#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block used
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);

}
