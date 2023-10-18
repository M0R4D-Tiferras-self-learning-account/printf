#include "main.h"

/**
 * handle_integer_specifier - Handles integer (d and i) format specifiers.
 *
 * @num: integer value
 *
 * Return: The number of characters printed
 */

int handle_integer_specifier(int num)
{
	int len = 0;

	if (num < 0)
	{
		len++;
	}
	len += num_len(num);
	check_number(num);

	return (len);
}

/**
 * handle_format_specifier - format specifier from format string.
 *
 * @format_specifier: The format specifier character
 * @ap: va_list of arguments
 *
 * Return: The number of characters printed
 */

int handle_format_specifier(char format_specifier, va_list ap)
{
	int len = 0;

	switch (format_specifier)
	{
		case 'c':
			len += print_char(va_arg(ap, int));
			break;
		case 's':
			len += print_string(va_arg(ap, char *));
			break;
		case 'd':
		case 'i':
			len += handle_integer_specifier(va_arg(ap, int));
			break;
		default:
			len += print_char('%');
			len += print_char(format_specifier);
			break;
	}

	return (len);
}


/**
 * handle_format_string - Processes the format string and calls functions
 *
 * @format: The format string
 * @ap: va_list of arguments
 *
 * Return: The number of characters printed
 */

int handle_format_string(const char *format, va_list ap)
{
	int len = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				len += print_char('%');
			}
			else if (*format == '\0')
			{
				break;
			}
			else
			{
				len += handle_format_specifier(*format, ap);
			}
		}
		else
		{
			len += print_char(*format);
		}
		format++;
	}

	return (len);
}

/**
 * _printf - user defined printf
 * @format: format string
 *
 * Return: size of printed arguments
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	va_start(ap, format);
	if (!format)
		return (-1);

	len = handle_format_string(format, ap);

	va_end(ap);
	return (len);
}

