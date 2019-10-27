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
	unsigned int fmt_i, dest_i; /* string iterators */
	unsigned int arg_type;
	char *index; /* essentailly a bookmark */
	char *cnvrtd_str; /* post-conversion arg string */
	char *fmttd_str; /* post-formatting string */
	char *dest_buff[1024]; /* string to return */

	char *(*cnvrt_li)(char *, long int);
	char *(*cnvrt_lu)(char *, unsigned long);
	char *(*cnvrt_ptr)(char *, char *);

	/* initialize arg list */
	va_start(args, format);

	/* loop through format, stopping at null-byte */
	for (fmt_i = dest_i = 0; format[fmt_i]; fmt_i++, dest_i++)
	{
		/* check for format specifier */
		if (format[fmt_i] == '%')
		{
			/* index occurence of '%' */
			index = &format[fmt_i];

			/* identify arg type */
			arg_type = arg_type_identify(index);

			/* retrieve conversion function by arg type */
			switch (arg_type)
			{
				case 0:
					/* assign function and to retrieve converted arg */
					cnvrt_li = li_func_mngr(index);
					cnvrtd_str = cnvrt_li(index, va_arg(args, long int));
				case 1:
					cnvrt_lu = lu_func_mngr(index);
					cnvrtd_str = cnvrt_lu(index, va_arg(args, unsigned long));
				case 2:
					cnvrt_ptr = ptr_func_mngr(index);
					cnvrtd_str = cnvrt_ptr(index, va_arg(args, char *));
			}
			/* format converted arg according to flags */
			fmttd_str = fmt_mngr(index, cnvrtd_str);

			/* copy formatted string to dest_buff */
			for (; fmttd_str; dest_i++)
				dest_buff[dest_i] = *cnvrtd_str++;

			/* update fmt_i past format specifier */
			fmt_i += i_adjust(index);
		}
		/* if not '%' copy to dest_buff */
		else
			dest_buff[dest_i] = format[fmt_i];
	}
	/* free arg list */
	va_end(args);

	/* print formatted string */
	_print_string(dest_buff);

	/* return char count */
	return (_strlen(dest_buff));
}
