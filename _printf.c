#include "main.h"

/**
 * _printf - user defined printf
 * @format: format string
 *
 * Return: size of printed arguments
 */

int _printf(const char *format, ...)
{
	char *strCopy;
	char c;
	int len = 0;
	int num;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);
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
				switch (*format)
				{
					case 'c':
						c = (va_arg(ap, int));
						len += print_char(c);
						break;
					case 's':
						strCopy = (va_arg(ap, char *));
						len += print_string(strCopy);
						break;
					case 'd':
					case 'i':
						num = va_arg(ap, int);
						if (num < 0)
						{
							len++;
						}
						len += num_len(num);
						check_number(num);
						break;
					default:
						len += print_char('%');
						len += print_char(*format);
						break;
				}
			}
		}
		else
		{
			len += print_char(*format);
		}
		format++;
	}
	va_end(ap);
	return (len);
}

