#include <unistd.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: the characters to print
 *
 * Return: success 0
 *              error -1
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
