#include <stdio.h>
/**
 * main - main block
 *Description: program to print the alphabet in
 *lowercase wiithout 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
