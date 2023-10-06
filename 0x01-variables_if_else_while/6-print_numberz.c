#include <stdio.h>
/**
* main - Entry point
*
* Return: ALways 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
