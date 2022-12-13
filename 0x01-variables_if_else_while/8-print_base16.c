#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block used
 * Description: prints all single digit numbers of base 16
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);

}
