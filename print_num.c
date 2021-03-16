#include"holberton.h"
/**
  * print_num  - prints number to the stdout
  * @n: first parameter
  *
  * Return: Number of chars printed
  */
int print_num(int n)
{
	unsigned int x;
	int num_printed;

	x = n;
	num_printed = 0;
	if (n < 0)
	{
		_putchar('-');
		x *= -1;
	}
	if (x / 10)
		print_num(x / 10);
	num_printed += _putchar('0' + x % 10);
	return (num_printed + 1);
}
