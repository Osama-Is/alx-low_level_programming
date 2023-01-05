#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number from which to start printing
 *
 * Desription: n < 98 || n > 98
 */
void print_to_98(int n)
{
	while ((n <= 98) || (n >= 98))
	{
		if (n == 98)
		{
			printf("%d", n);
			putchar('\n');
		}
		else
		{
			printf("%d, ", n);
		}
		n += 98 - n;
	}
}
