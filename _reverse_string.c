#include "main.h"

/**
 * pr_str_rev - print string in reverse
 * @a: arguments
 * @f: pointer
 * Return: length
 */

int pr_str_rev(va_list a, flags_t *f)
{
	int i = 0;
	int j;
	char *s = va_arg(a, char *);

	(void)f;

	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_prnt_char(s[j]);
	return (i);
}

/**
 * pr_rot13 - print string using rot13
 * @a: arguments
 * @f: pointer
 * Return: length
 */

int pr_rot13(va_list a, flags_t *f)
{
	int i, j;
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *s = va_arg(a, char *);

	(void)f;

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_prnt_char(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_prnt_char(ROT13[i]);
			}
		}
	}
	return (j);
}

