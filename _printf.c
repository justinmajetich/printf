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
	char *dest_buff[1024];
	char *format_buff[1024];

	va_start(args, format);
	//loop through format_buff
	
		//check for format specifier
			//if true, call format manager, else error
		//check for escape character
 			//if true, call escape manager
		//copy to dest_buff
	va_end(args);
	return (_strlen(dest_buff));
}
