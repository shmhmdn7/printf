#include "main.h"

/**
 * t_flag - turns on flag
 * @s: character
 * @p: pointer
 * Return: 1
 */

int t_flag(char s, flags_t *p)
{
	int j = 0;

	switch (s)
	{
		case '+':
			p->plus = 1;
			j = 1;
			break;
		case ' ':
			p->space = 1;
			j = 1;
			break;
		case '#':
			p->hash = 1;
			j = 1;
			break;
		case '0':
			p->zero = 1;
			j = 1;
			break;
		case '-':
			p->minus = 1;
			j = 1;
			break;
	}
	return (j);
}

