#include"main.h"

/**
 * print_number - print an intger
 *
 * @n: the intger to be printed
*/

void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
