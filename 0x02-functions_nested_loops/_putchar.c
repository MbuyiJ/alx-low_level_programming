#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @ c: the character to print
 * Return:On success 1
 * On error: -2 returned and errno is set properly
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
