#include "holberton.h"
#define NULL 0
/**
* d_decimal_cnvrt - A function that converts a decimal
* to a string
* @num: number input to be converted to a string
*
* Return: A converted string
*/
char *d_decimal_cnvrt(long int num)
{
	char *num_to_s;

	num_to_s = malloc(sizeof(char) * 100);
	if (num_to_s == NULL)
		return (NULL);
	return (num_to_s = _itoa(num, num_to_s, 10));
}
