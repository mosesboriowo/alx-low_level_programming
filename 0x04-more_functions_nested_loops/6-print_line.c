#include "main.h"

/**
 * print_line - The code draws a straight line in the terminal
 * @n: The number
 * Return: Always 0.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
