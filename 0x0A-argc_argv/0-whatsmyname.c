#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of argumments
 * @argv: array of arguments
 *
 * Return: Always 0 (sucess)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
