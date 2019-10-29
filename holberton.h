#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/* STRUCTURES */
/**
 * struct li_func_pointers - functions to convert long int args
 * @spec: conversion specifier
 * @f: function pointer
 */
typedef struct li_func_pointers
{
	char *spec;
	char *(*f)(long int);
} li_fps;

/**
 * struct lu_func_pointers - functions to convert long unsigned args
 * @spec: conversion specifier
 * @f: function pointer
 */
typedef struct lu_func_pointers
{
	char *spec;
	char *(*f)(unsigned long);
} lu_fps;

/**
 * struct ptr_func_pointers - functions to convert pointer args
 * @spec: conversion specifier
 * @f: function pointer
 */
typedef struct ptr_func_pointers
{
	char *spec;
	char *(*f)(char *);
} ptr_fps;

/**
 * struct arg_type_index - stores conversion specs with data type signifier
 * @spec: conversion spec(s)
 * @type: data type
 */
typedef struct arg_type_index
{
		char *spec;
		int type;
} arg_t;

/* PARENT FUNCTION */
int _printf(const char *format, ...);

/* MANAGER FUNCTIONS */
char *fmt_mngr(va_list, char *);
char *(*li_fp_mngr(char *))(long int);
char *(*lu_fp_mngr(char *))(unsigned long);
char *(*ptr_fp_mngr(char *))(char *);

/* CONVERSION FUNCTIONS */
char *r_reverse_cnvrt(char *s);
char *R_rot13_cnvrt(char *s);
char *s_string_cnvrt(char *s);
char *S_nonprint_cnvrt(char *);
char *p_pointer_cnvrt(char *);
char *c_char_cnvrt(long int c);
char *d_decimal_cnvrt(long int num);
char *i_int_cnvrt(long int num);
char *u_unsigned_cnvrt(unsigned long int num);

/* FORMATTING FUNCTIONS */

/* HELPER FUNCTIONS */
int _strlen(char *);
char *_itoa(long int, char *, int);
char *_strncpy(char *, const char *, int);
char *_revstr(char *);
void _print_string(char *);
int arg_type_identifier(char *);
char *cpy_fmt_spec(const char *);
#endif
