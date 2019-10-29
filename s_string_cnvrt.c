#include "holberton.h"
/**
* s_string_cnvrt - A function that returns a string
* @s: returns a string
* Return: The string input
*/
char *s_string_cnvrt(char *s)
{
	int j;
	char *print_s;

	if (!s)
		return (NULL);
	
	print_s = malloc(sizeof(char) * (_strlen(s) + 1));
	if (print_s == NULL)
		return (NULL);
	for (j = 0; s[j] != '\0'; j++)
		print_s[j] = s[j];
	print_s[j] = '\0';
	return (print_s);
}
