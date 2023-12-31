#include "main.h"

/**
 * pr_bigS - non printable characters
 * @a: arguments
 * @p: pointer
 * Return: number of characters printed
 */

int pr_bigS(va_list a, flags_t *p)
{
	int j;
	int leng;
	char *result;
	char *s = va_arg(a, char *);

	(void)p;

	if (!s)
		return (_write_str("(null)"));

	for (j = 0; s[j]; j++)
	{
		if (s[j] > 0 && (s[j] < 32 || s[j] >= 127))
		{
			_write_str("\\x");
			leng += 2;
			result = convert(s[j], 16, 0);
			if (!result[1])
				leng += _prnt_char('0');
			leng += _write_str(result);
		}
		else
			leng += _prnt_char(s[j]);
	}
	return (leng);
}

/**
 * pr_address - prints address
 * @a: arguments
 * @p: pointer
 * Return: number of characters printed
 */

int pr_address(va_list a, flags_t *p)
{
	char *s;
	unsigned int i = va_arg(a, unsigned long int);

	register int leng = 0;

	(void)p;

	if (!i)
		return (_write_str("(nil)"));
	s = convert(i, 16, 1);
	leng += _write_str("0x");
	leng += _write_str(s);
	return (leng);
}

