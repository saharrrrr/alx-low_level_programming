#include"main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of time the character should be printed
 *
*/

void print_line(int n)
{
	int lnChar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChar = 1; lnChar <= n; lnChar++)
			_putchar('_');
		_putchar('\n');
	}
}
