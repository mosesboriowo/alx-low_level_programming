#include "main.h"

/**
 * _last_digit - print the last digit of a number
 * @n: is the number we are printing
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int d = (n % 10);

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (0);
}
