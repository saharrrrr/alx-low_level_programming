#include"main.h"

/**
 * _abs - function that computs the absolte
 *		value of an integr
 *
 *@n: takes in integer type input for function
 *Return: always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
