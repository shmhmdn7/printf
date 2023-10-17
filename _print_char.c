#include "main.h"
#include <unistd.h>

/**
 * _prnt_char - print char
 * @c: char to print
 * Return: on success 1.
 */

int _prnt_char(char c)
{
	static int x;
	static char buffer[1024];

	if (c == -1 || x >= 1024)
	{
		write(1, &buffer, x);
		x = 0;
	}

	if (c != -1)
	{
		buffer[x] = c;
		x++;
	}

	return (1);
}

/**
 * _write_str - string
 * @s: pointer
 * Return: number of char written
 */

int _write_str(char *s)
{
	register int x;

	for (x = 0; s[x] != '\0'; x++)
		_prnt_char(s[x]);

	return (x);
}

