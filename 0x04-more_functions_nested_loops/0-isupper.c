#include "main.h"

/**
 *  _isupper - checkes for lowercasse charater
 *  @c: the character to be checked
 *  Return: 1 for lower case and 0 for anything else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
