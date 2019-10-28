#include "holberton.h"
#define NULL 0
/**
* c_char_cnvrt - A function that prints the character
* corresponding with its ASCII value
* @c: int ASCII value to be converted to a string
* Return: Converted string
*/
char *c_char_cnvrt(long int c)
{
	int i;
	char *print_char;

	print_char = malloc(sizeof(char) + 1);
	if (print_char == NULL)
		return (NULL);
	print_char[0] = c;
	print_char[1] = '\0';
	return (print_char);
}
