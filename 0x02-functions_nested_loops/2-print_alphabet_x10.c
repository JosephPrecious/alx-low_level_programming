#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char hp;
int o;
o = 0;
while (o < 10)
{
for (hp = 'a'; hp <= 'z'; hp++)
{
_putchar(hp);
}
_putchar('\n');
o++;
}
}
