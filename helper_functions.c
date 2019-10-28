#include "holberton.h"
/**
* _strnlen - Function that finds the length of a string
* @s: string that the length of is found
*
* Return: length of the @s
*/
int _strlen(char *s)
{
	/* variable to loop through string to get length */
	int len = 0;

	/* Loop through string, checking for null byte */
	while (s[len] != '\0')
		len++;
	/* return length variable once null byte is reached */
	return (len);
}
/**
* _atoi - Function that finds the length of a string
* @s: string that is converted to an int
*
* Return: converted string
*/
int _atoi(char *s)
{
	/* variables to loop and to hold result*/
	int i, result = 0;

	/* loop through string until null byte*/
	for (i = 0; s[i] != '\0'; i++)
		/* and update result with each index conversion*/
		result = result * 10 + s[i] - '0';
	/* return converted string*/
	return (result);
}
/**
*
*
*
*/
char *_itoa(int num, char *buffer, int base)
{
	

}

/**
 * *_strncpy - copies n bytes of src to dest string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes of src to copy
 *
 * Return: string copied to i.e dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
