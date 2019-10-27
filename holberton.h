#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>

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

#endif
