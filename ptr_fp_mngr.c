#include "holberton.h"

/**
 * ptr_fp_mngr - select appropirate pointer accepting function
 * @spec: format specifier for arg
 *
 * Return: function pointer on Success, NULL on Fail
 */
char *(*ptr_fp_mngr(char *fmt_spec))(char *)
{
	/* define struct of function pointers */
	ptr_fps fps[] = {
		{"s", s_string_cnvrt},
		{"S", S_nonprint_cnvrt},
		{"r", r_reverse_cnvrt},
		{"R", R_rot13_cnvrt},
		{"p", p_pointer_cnvrt}
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
