#include "holberton.h"

/**
 * lu_fp_mngr - select appropirate unsigned long accepting function
 * @spec: format specifier for arg
 *
 * Return: function pointer on Success, NULL on Fail
 */
char *(*lu_fp_mngr(char *spec))(char *s, unsigned long arg)
{
	/* define struct of function pointers */
	lu_fps fps[] = {
		{"u", u_unsigned_cnvrt},
		{"o", o_octal_cnvrt},
		{"x", x_lowhex_cnvrt},
		{"X", X_uphex_cnvrt},
		{"b", b_binary_cnvrt},
		{NULL, NULL}
	};
	int i = 0;

	/* parse struct to match specifier */
	while (fps[i].spec)
	{
		/* if match is found, return function pointer */
		if (*fps[i].spec == *s)
			return (fps[i].f);
		i++
	}
	/* return NULL if match not found */
	return (NULL);
}
