#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/* STRUCTURES */
/**
 * li_fps - functions to convert long int args
 * @spec: conversion specifier
 * @f: function pointer
 */
struct li_fps
{
	char *spec;
	char *(*f)(long int);
};

/**
 * lu_fps - functions to convert long unsigned args
 * @spec: conversion specifier
 * @f: function pointer
 */
struct lu_fps
{
	char *spec;
	char *(*f)(long int);
};

/**
 * ptr_fps - functions to convert pointer args
 * @spec: conversion specifier
 * @f: function pointer
 */
struct ptr_fps
{
	char *spec;
	char *(*f)(long int);
};

/* PARENT FUNCTION */
int _printf(const char *format, ...);

/* MANAGER FUNCTIONS */
char *fmt_mngr(char *, char *);
char *(*li_func_mngr(char *))(char *, long int);
char *(*lu_func_mngr(char *))(char *, unsigned long);
char *(*ptr_func_mngr(char *))(char *, char *);

/* CONVERSION FUNCTIONS */

/* FORMATTING FUNCTIONS */

/* HELPER FUNCTIONS */

#endif
