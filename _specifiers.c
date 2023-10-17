#include "main.h"

/**
 * _pr_spf - printing functions
 * @sp: conversion specifier
 * Return: pointer
 */

int (*_pr_spf(char sp))(va_list, flags_t *)
{

	ph specifier_array[] = {
		{'c', prnt_char},
		{'s', prnt_str},
		{'%', pr_percent},
		{'d', pr_int},
		{'i', pr_int},
		{'u', prnt_unsigned},
		{'x', prnt_hex},
		{'X', prnt_hex_big},
		{'b', prnt_int_binary},
		{'o', prnt_octal},
		{'R', pr_rot13},
		{'r', pr_str_rev},
		{'S', pr_bigS},
		{'p', pr_address}
		};

	int flags = 14;

	register int x;

	for (x = 0; x < flags; x++)
		if (specifier_array[x].c == sp)
			return (specifier_array[x].f);
	return (NULL);
}

