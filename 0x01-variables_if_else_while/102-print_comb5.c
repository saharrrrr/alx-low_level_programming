#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Write a program that prints all possible
 *
 * Return: 0 (success)
*/

int main(void)
{
	int firstdigit = 0, secondDigit;

	while (firstdigit <= 99)
	{
		secondDigit = firstdigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstdigit)
			{
				putchar((firstdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstdigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstdigit++;
	}
	putchar('\n');

	return (0);
}
