#include "holberton.h"
/**
* fmt_mngr - directs/retrieves data to/from formatting and
* conversion funcs
* @args: arg list
* @fmt_spec: pointer to start of format spec in format string
*
* Return: converted string on Success, NULL on Fail
*/
char *fmt_mngr(va_list args, char *fmt_spec)
{
	int arg_type = 0;
	char *cnvrtd_str; /* post-conversion arg string */

	char *(*cnvrt_li)(long int);
	char *(*cnvrt_lu)(unsigned long);
	char *(*cnvrt_ptr)(char *);

	/* identify arg type */
	arg_type = arg_type_identifier(fmt_spec);
	/* retrieve conversion function by arg type */
		switch (arg_type)
		{
			case 0:
				/* assign function and to retrieve converted arg */
				cnvrt_li = li_fp_mngr(fmt_spec);
				cnvrtd_str = cnvrt_li(va_arg(args, int));
				break;
			case 1:
				cnvrt_li = li_fp_mngr(fmt_spec);
				cnvrtd_str = cnvrt_li(va_arg(args, long int));
				break;
			case 2:
				cnvrt_lu = lu_fp_mngr(fmt_spec);
				cnvrtd_str = cnvrt_lu(va_arg(args, unsigned int));
				break;
			case 3:
				cnvrt_lu = lu_fp_mngr(fmt_spec);
				cnvrtd_str = cnvrt_lu(va_arg(args, unsigned long));
				break;
			case 4:
				cnvrt_ptr = ptr_fp_mngr(fmt_spec);
				cnvrtd_str = cnvrt_ptr(va_arg(args, char *));
				break;
		}
/* format converted arg according to flags */
/* fmttd_str = fmt_mngr(fmt_spec, cnvrtd_str); */
	return (cnvrtd_str);
}
