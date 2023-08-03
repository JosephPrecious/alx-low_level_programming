#include "main.h"

/**
 * _puts_recursion - function like puts():
 * @s: input
 * Return: Always 0 (sucess)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}