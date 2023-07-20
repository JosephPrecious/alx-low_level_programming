#include "main.h"

/**
 * _isdigit - check for digit
 * @c: the chharacter to be checked
 * Return: 1 for digit character or o for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
