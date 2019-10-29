#include "holberton.h"

/**
* r_reverse_cnvrt - Function that prints a string in reverse
* @s: arg to be reversed
*
* Return: reversed string
*/
char *r_reverse_cnvrt(char *s)
{
	int i, j; /* looping variables */
	char *dest; /* target string */

	if (!s)
	{
		dest = malloc(sizeof(char) * 7);
		if (dest == NULL)
			return (NULL);
		dest = "(null)";
	}
	else
	{
		/* allocate memory for dest */
		dest = malloc(sizeof(*s) * (_strlen(s) + 1));
		if (dest == NULL)
			return (NULL);

		/* copy arg to new string in reverse */
		i = _strlen(s) - 1;
		j = 0;
		while (i >= 0)
			dest[j++] = s[i--];

		/* initialize null-byte */
		dest[j] = '\0';
	}

	return (dest);
}
