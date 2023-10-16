#include "main.h"

/**
 * _putchar - like putchar in standar library
 *
 * @c: charachter will be printed
 *
 * Return: 1 (Success)
*/

int	_putchar(char c)
{
	return (write(1, &c, 1));
}
