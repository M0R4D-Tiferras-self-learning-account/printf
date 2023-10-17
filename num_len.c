#include "main.h"

/**
 * num_len - count digits of an integer
 * @num: int
 *
 * Return: number of digits in @num
 */

int num_len(int num)
{
	int i = 0;

	if (num == 0)
	{
		return (1);
	}

	while (num != 0)
	{
		i++;
		num /= 10;
	}

	return (i);
}

