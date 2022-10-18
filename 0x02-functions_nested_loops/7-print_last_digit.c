#include "main.h"

/**
 * _last_digit - print the last digit of a number
 * @n: is the number we are printing
 *
 * Return:value of last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
