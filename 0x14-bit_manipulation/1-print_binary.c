#include "main.h"

/**
 * print_binary - prints a number as string
 * @n: number to print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8, bit = 0;

	while (num)
	{
		if (n && 1l << --num)
		{
			_putchar('1');
			bit++;
		}
		else if (bit)
			_putchar('0');
	}
	if (!bit)
		_putchar('0');
}
