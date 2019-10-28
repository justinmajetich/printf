#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>

/* STRUCTURES */
/**
 * li_func_pointers - functions to convert long int args
 * @spec: conversion specifier
 * @f: function pointer
 */
typedef struct li_func_pointers
{
	char *spec;
	char *(*f)(long int);
} li_fps;

/**
 * lu_func_pointers - functions to convert long unsigned args
 * @spec: conversion specifier
 * @f: function pointer
 */
typedef struct lu_func_pointers
{
	char *spec;
	char *(*f)(unsigned long);
} lu_fps;

/**
 * ptr_func_pointers - functions to convert pointer args
 * @spec: conversion specifier
 * @f: function pointer
 */
struct ptr_func_pointers
{
	char *spec;
	char *(*f)(char *);
} ptr_fps;

/* PARENT FUNCTION */
int _printf(const char *format, ...);

/* MANAGER FUNCTIONS */
char *fmt_mngr(char *, char *);
char *(*li_fp_mngr(char *))(char *, long int);
char *(*lu_fp_mngr(char *))(char *, unsigned long);
char *(*ptr_fp_mngr(char *))(char *, char *);

/* CONVERSION FUNCTIONS */
char *r_reverse(char *s);
char *R_rot13(char *s);

/* FORMATTING FUNCTIONS */

/* HELPER FUNCTIONS */
int _atoi(char *s);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int arg_type_identifier(char *);
char *cpy_fmt_spec(char *);
#endif
