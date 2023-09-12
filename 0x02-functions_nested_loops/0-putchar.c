#include "main.h"

/**
 * main - entry point
 *
 * description: prints _putchar using putchar prototype
 *
 * return: always 0
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
