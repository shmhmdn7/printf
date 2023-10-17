#include "main.h"

/**
 * convert - converts numbers into strings
 * @num: number
 * @b: base
 * @lc: lowercase
 * Return: string
 */

char *convert(unsigned long int num, int b, int lc)
{
	static char *x;
	static char buffer[50];
	char *p;

	x = (lc)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	do {
		*--p = x[num % b];
		num /= b;
	} while (num != 0);

	return (p);
}

