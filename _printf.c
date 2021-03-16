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
	while (format[i])
	{
		if (format[i] != '%')
		{
			j += _putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				j += _putchar(va_arg(op, int));
			else if(format[i] == 's')
				j += print_string(va_arg(op, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				j += print_num(va_arg(op, int));
		}
		i++;
	}
	va_end(op);
	return (j);
}
