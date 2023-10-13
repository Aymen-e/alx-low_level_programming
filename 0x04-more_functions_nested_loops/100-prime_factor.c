#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long largest_prime = -1;
	long i = 2;

	while (i * i <= n)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n = n / i;
		}
		i = i + 1;
	}

	if (n > 1)
	{
		largest_prime = n;
	}

	printf("%ld\n", largest_prime);

	return (0);
}

