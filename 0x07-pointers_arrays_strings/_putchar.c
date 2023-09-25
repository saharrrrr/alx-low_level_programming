#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the characters to print
 *
 * Return: success 1
 *              error -1
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
