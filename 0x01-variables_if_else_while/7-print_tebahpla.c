#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabets in revers
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);

}
