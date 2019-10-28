#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>

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
char *fmt_mngr(char *, char *);
char *(*li_fp_mngr(char *))(long int);
char *(*lu_fp_mngr(char *))(unsigned long);
char *(*ptr_fp_mngr(char *))(char *);

/* CONVERSION FUNCTIONS */
char *r_reverse_cnvrt(char *);
char *R_rot13_cnvrt(char *);
char *s_string_cnvrt(char *);
char *S_nonprint_cnvrt(char *);
char *p_pointer_cnvrt(char *);

/* FORMATTING FUNCTIONS */

/* HELPER FUNCTIONS */
int _atoi(char *);
int _strlen(char *);
char *_strncpy(char *, const char *, int);
int arg_type_identifier(char *);
char *cpy_fmt_spec(const char *);
#endif
