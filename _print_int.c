#include "main.h"

/**
 * pr_int - prints int
 * @a: arguments
 * @p: pointer
 * Return: num of char printed
 */

int pr_int(va_list a, flags_t *p)
{
	int j = va_arg(a, int);
	int result = _length(j);

	if (p->space == 1 && p->plus == 0 && j >= 0)
		result += _prnt_char(' ');
	if (p->plus == 1 && j >= 0)
		result += _prnt_char('+');
	if (j <= 0)
		result++;
	pr_num(j);

return (result);
}

/**
 * pr_num - prints all num digits
 * @n: number
 */

void pr_num(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_prnt_char('-');
		x = -n;
	}
	else
		x = n;

	if (x / 10)
		pr_num(x / 10);
	_prnt_char((x % 10) + '0');
}

/**
 * _length - counts printed char
 * @i: integer
 * Return: num of char printed
 */

int _length(int i)
{
	unsigned int x = 0;
	unsigned int y;

	if (i < 0)
		y = i * -1;
	else
		y = i;

	while (y != 0)
	{
		y /= 10;
		x++;
	}

	return (x);
}

