#include "main.h"

/**
 * print_char - prints a character using write
 * @c: char
 *
 * Return: count of printed chars
 */

int print_char(char c)
{
	write(1, &c, 1);

	return (1);
}
