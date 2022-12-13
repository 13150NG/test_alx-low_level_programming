#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block used
 * Description: prints all posible different
 * combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i;
	int n;
	int t = 0;

	while (t < 10)
	{
		n = 0;
		while (n < 10)
		{
			i = 0;
				while (i < 10)
			{
				if (i != n && n != t && t < n && n < i)
				{
					putchar('0' + t);
					putchar('0' + n);
					putchar('0' + i);

					if (i + n + t != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			n++;
		}
		t++;
	}
	putchar('\n');
	return (0);
}

