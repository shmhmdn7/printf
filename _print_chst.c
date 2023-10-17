#include "main.h"

/**
 * prnt_str - print string
 * @a: arguments
 * @p: pointer
 * Return: number of char printed
 */

int prnt_str(va_list a, flags_t *p)
{
	char *s = va_arg(a, char *);

	(void)p;

	if (!s)
		s = "(null)";
	return (_write_str(s));
}

/**
 * prnt_char - prints a char
 * @a: argument
 * @p: pointer
 * Return: number of char printed
 */

int prnt_char(va_list a, flags_t *p)
{
	(void)p;

	_prnt_char(va_arg(a, int));

	return (1);
}

/**
 * pr_percent - prints a precent
 * @a: arguments
 * @p: pointer
 * Return: number of char printed
 */

int pr_percent(va_list a, flags_t *p)
{
	(void)a;
	(void)p;

	return (_prnt_char('%'));
}

