#include "main.h"
/**
* _isalpha - checks if a character is a letter, both lowercase or uppercase.
*
* @c: The character to be checked.
*
* Return: 1 if 'c' is an alphabet letter, 0 otherwise.
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
