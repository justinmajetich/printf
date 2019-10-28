#include "holberton.h"

/**
 * arg_type_identifier - identify type based on format specifier
 * @fmt_spec: pointer to format specifier
 *
 * Return: 0 for long int, 1 for unsigned long, 2 for pointer, -1 for Fail
 */
int arg_type_identifier(char *fmt_spec)
{
	/**
	 * conversion specs with associated data type signifier,
	 * (0: long int, 1: unsigned long, 2: char *)
	 */
	arg_t index[] = {
		{"dic", 0},
		{"uoxXb", 1},
		{"sSrRp", 2},
		{NULL, -1}
	};

	int row, col;

	/* parse struct for matching spec */
	for (row = 0; index[row].spec != NULL; row++)
		for (col = 0; index[row].spec[col]; col++)
			/* if match found return data type signifier */
			if (index[row].spec[col] == fmt_spec[0])
				return (index[row].type);
	return (-1);
}
