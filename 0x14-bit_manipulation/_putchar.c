#include "main.h"
#include <unistd.h>
/**
 * _putchar - write down the character c to stdout
 * @c: The char to be printed
 *
 * Return: success 1.
 * an error, -1 shouled be  returned, and errno is set also.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
