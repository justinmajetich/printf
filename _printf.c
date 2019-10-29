#include "holberton.h"
/**
* _printf - A function that prints formatted text
* @format: Character string
* Return: number of chars printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int fmt_i, dest_i, i; /* string iterators */
	char *fmt_spec; /* isolated format specifier */
	char *cnvrtd_str; /* post-conversion arg string */
	char dest_buff[1024]; /* string to return */

	va_start(args, format);
	for (fmt_i = dest_i = 0; format[fmt_i]; fmt_i++, dest_i++)
	{
		/* check for format specifier */
		if ((format[fmt_i] == '%') && (format[fmt_i + 1] != '%'))
		{
			/* copy format specifier to new string */
			fmt_spec = cpy_fmt_spec(&format[fmt_i]);
			/* index specifier and send to format manager with arg list*/
			cnvrtd_str = fmt_mngr(args, fmt_spec);
			if (!cnvrtd_str)
				return (-1);

			/* copy formatted string to dest_buff */
			for (i = 0; cnvrtd_str[i]; i++, dest_i++)
				dest_buff[dest_i] = cnvrtd_str[i];
			/* offset increment on next loop interation */
			dest_i--;
			fmt_i += _strlen(fmt_spec) - 1;
		}
		/* if not '%' copy to dest_buff */
		else
			dest_buff[dest_i] = format[fmt_i];
	}
	va_end(args);/* free args*/
	dest_buff[dest_i] = '\0';/* place null byte at end of dest*/
	_print_string(dest_buff);

	return (_strlen(dest_buff));
}
