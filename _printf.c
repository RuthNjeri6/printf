#include "holberton.h"
/**
  * _printf - function that prints formatted output in the stdout
  * @format: pointer to a character.
  *
  * Return: int
  */
int _printf(const char *format, ...)
{
	va_list op;
	int i, j;

	i = 0;
	j = 0;
	va_start(op, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			j++;
		}
		else
		{
			if (format[i + 1] == 'c')
				j += _putchar(va_arg(op, int));
			else if (format[i + 1] == 's')
				j += print_string(va_arg(op, char *));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				j += print_num(va_arg(op, int));
			else




				_putchar('%');
				_putchar(format[i]);
				j += 2;
		}
		i++;
	}
	va_end(op);
	return (j);
}
