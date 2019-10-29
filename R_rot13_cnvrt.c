#include "holberton.h"
/**
* R_rot13 - function that encodes a string using rot13
* @s: string to be encoded
* Return: Rot13'd string
*/
char *R_rot13_cnvrt(char *s)
{
	int i, j; /*loop iterating variables*/
	/* character array of upper and lower alpha */
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/* character array with alpha index elements shifted left 13 spaces */
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *encoded;

	/* allocate for encoded, plus null-byte */
	encoded = malloc(sizeof(*s) * (_strlen(s) + i));
	if (encoded == NULL)
		return (NULL);

	/*  Loop through string until null byte*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/* increment 51 times, the length of the upper and lower alpha*/
		for (j = 0; j <= 51; j++)
		{
			/* When the letter of the string matches alpha letter*/
			if (s[i] == in[j])
			{
				/* Replace string letter with Rot13 alpha*/
				encoded[i] = out[j];
				/* break out of loop to avoid reversing letter */
				break;
			}
		}
	}
	/* terminate new str with null-byte */
	encoded[i] = '\0';
	/* return the encoded string*/
	return (encoded);
}
