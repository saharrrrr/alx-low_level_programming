#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of string
 * @s: string
 *
 * Return: int
*/
int _strlen(char *s)
{
	int size = 0;

	for(; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, nc = 0, j = 0, cmpt = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, ac++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
