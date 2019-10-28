#include "holberton.h"
/**
* r_reverse - Function that prints a string in reverse
* @s: string input to be reversed
*
* Return: reversed string
*/
char *r_reverse(char *s)
{
	int i, len = 0; /* looping variables */
	char *begin, *end, temp; /* buffers to hold the string characters*/

	/* set loop to run while length is not null byte*/
	while (s[len] != '\0')
	{
		/*increment to null byte to get length*/
		len++;
	}
	/* point begin buffer to string */
	begin = s;
	/* point end buffer to string*/
	end = s;
	/* loop through first half of string*/
	for (i = 0; i < len / 2; i++)
	{
		/*store end elements in temp*/
		temp = *end;
		/* set the end to equal begin*/
		*end = *begin;
		/*replacing index elements of begin with the end from temp */
		*begin = temp;
		/*increment begin from the 0 index*/
		begin++;
		/*deincrement end from the length to reverse*/
		end--;
	}
	/* return reversed string*/
	return (s);
}
