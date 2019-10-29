#include "holberton.h"

/**
 * _print_string - print string
 * @s: string to print
 */
void _print_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
