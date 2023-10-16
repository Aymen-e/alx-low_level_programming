#include "main.h"

/**
* puts_half - Print second half of a string
* @str: char sttay string type
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
