#include "holberton.h"
/**
  * print_string - prints a string to stdout
  * @str: pointer to a character that is the start of a string
  *
  * Return: int
  */
int print_string(char *str)
{
	static int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
