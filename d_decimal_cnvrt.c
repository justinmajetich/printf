#include "holberton.h"
/**
* d_decimal_cnvrt -  converts decimal to string
* @num: number input to be converted to a string
*
* Return: converted string on Success, NULL on Fail
*/
char *d_decimal_cnvrt(long int num)
{
	char *num_to_s;

	/* allocate for new buffer */
	num_to_s = malloc(sizeof(char) * 100);
	if (num_to_s == NULL)
		return (NULL);
	/* convert number to str in new buffer and return */
	return (_itoa(num, num_to_s, 10));
}
