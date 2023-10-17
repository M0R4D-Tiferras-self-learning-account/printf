#include "main.h"

/**
 * print_string - printing a string
 *
 * @some_text: str to be printed
 *
 * Return: lentgh of str
*/

int print_string(char *some_text)
{
	int strlen = 0;

	if (some_text == NULL)
	{
		strlen += write(1, "(null)", 6);
		return (strlen);

	}

	while (*(some_text + strlen))
	{
		write(1, some_text + strlen, 1);
		strlen++;
	}

	return (strlen);
}
