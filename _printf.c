#include "holberton.h"
/**
* _printf - A function that prints formatted text
* @format: Character string
*
* Return: formatted text
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int fmt_i, dest_i, i; /* string iterators */
	unsigned int arg_type;
	char *fmt_spec; /* isolated format specifier */
	char *cnvrtd_str; /* post-conversion arg string */
	/* char *fmttd_str; post-formatting string */
	char dest_buff[1024]; /* string to return */

	char *(*cnvrt_li)(long int);
	char *(*cnvrt_lu)(unsigned long);
	char *(*cnvrt_ptr)(char *);

	/* initialize arg list */
	va_start(args, format);

	/* loop through format, stopping at null-byte */
	for (fmt_i = dest_i = 0; format[fmt_i]; fmt_i++, dest_i++)
	{
		/* check for format specifier */
		if ((format[fmt_i] == '%') && (format[fmt_i + 1] != '%'))
		{
			/* copy format specifier to new string */
			fmt_spec = cpy_fmt_spec(&format[fmt_i]);
			/* identify arg type */
			arg_type = arg_type_identifier(fmt_spec);
			/* retrieve conversion function by arg type */
			switch (arg_type)
			{
				case 0:
					/* assign function and to retrieve converted arg */
					cnvrt_li = li_fp_mngr(fmt_spec);
					cnvrtd_str = cnvrt_li(va_arg(args, long int));
					break;
				case 1:
					printf("fmt_spec = %s\n", fmt_spec);
					cnvrt_lu = lu_fp_mngr(fmt_spec);
					cnvrtd_str = cnvrt_lu(va_arg(args, unsigned long));
					break;
				case 2:
					cnvrt_ptr = ptr_fp_mngr(fmt_spec);
					cnvrtd_str = cnvrt_ptr(va_arg(args, char *));
					break;
			}
			/* format converted arg according to flags 
			fmttd_str = fmt_mngr(fmt_spec, cnvrtd_str);
			*/
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
	/* free arg list */
	va_end(args);
	/* cap with null-byte */
	dest_buff[dest_i] = '\0';
	/* print formatted string */
	_print_string(dest_buff);
	/* return char count */
	return (_strlen(dest_buff));
}
