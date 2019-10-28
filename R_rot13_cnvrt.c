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
				s[i] = out[j];
				/* break out of loop to avoid reversing letter */
				break;
			}
		}
	}
	/* return the encoded string*/
	return (s);
}
