#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block used
 * Description: prints all posible different
 * combinations of double digits
 * Return: 0
 */
int main(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (n != i && n < i)
			{
				putchar('0' + n);
				putchar('0' + i);

				if (i + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			i++;
		}
		n++;

	}
	putchar('\n');
	return (0);

}
