#include <unistd.h>
#include "main.h"

/**
 * _putchar - To write character
 * @c: The character
 * Return: if successful 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
