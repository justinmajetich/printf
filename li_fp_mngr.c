#include "holberton.h"

/**
 * li_fp_mngr - select appropirate long int accepting function
 * @spec: format specifier for arg
 *
 * Return: function pointer on Success, NULL on Fail
 */
char *(*li_fp_mngr(char *fmt_spec))(long int arg)
{
	/* define struct of function pointers */
	li_fps fps[] = {
		{"d", d_decimal_cnvrt},
		{"i", i_int_cnvrt},
		{"c", c_char_cnvrt},
		{NULL, NULL}
	};

	int i = 0;

	/* parse struct to match specifier */
	while (fps[i].spec)
	{
		/* if match is found, return function pointer */
		if (*fps[i].spec == fmt_spec[0])
			return (fps[i].f);
		i++;
	}
	/* return NULL if match not found */
	return (NULL);
}
