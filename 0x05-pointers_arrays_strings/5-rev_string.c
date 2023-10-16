#include "main.h"

/**
* rev_string - Reverses a string
*
* @s: The string parameter input
*
* Return: Nothing
*/
void rev_string(char *s)
{
	int l, i;
	char temp;

	/* Find string length without null char */
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* Swap the string by looping to half the string */
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}

