#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @_putchar: The character to print
 *
 * Return: on succes 1.
 * on error , -1 is returned, and errno is set appropriately
 */
int putchar(char _putchar)
{
	return (write(1, &_putchar, 1));
}

