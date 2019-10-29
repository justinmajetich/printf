#include "holberton.h"
/**
* i_int_cnvrt - Function that converts an integer
* input to a string
* @num: int var to be converted to string
* Return: Converted string
*
*/
char *i_int_cnvrt(long int num)
{
	char *num_to_s;

	num_to_s = malloc(sizeof(char) * 100);
	if (num_to_s == NULL)
		return (NULL);
	return (num_to_s = _itoa(num, num_to_s, 10));
}
