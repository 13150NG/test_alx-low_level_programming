#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block used
 * Description: prints all posible combinations of double
 * numbers
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int fnum;
	int lnum;

	int n2;
	int fnum2;
	int lnum2;

	while (n <= 98)
	{
		fnum = (n / 10 + '0');
		lnum = (n % 10 + '0');
		n2 = 0;

		while (n2 <= 99)
		{
			fnum2 = (n2 / 10 + '0');
			lnum2 = (n2 % 10 + '0');

			if (n < n2)
			{
				putchar(fnum);
				putchar(lnum);
				putchar(' ');
				putchar(fnum2);
				putchar(lnum2);

				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
