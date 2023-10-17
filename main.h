#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags_t - struct containing flags
 * @plus: '+' character
 * @space: ' ' character
 * @hash: '#' character
 * @zero: '0' character
 * @minus: '-' character
 */
typedef struct flags_t
{
	int plus;
	int space;
	int hash;
	int zero;
	int minus;
} flags_t;

/**
 * struct ph - struct
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct ph
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;


int _printf(const char *format, ...);
int (*_pr_spf(char sp))(va_list, flags_t *);
int _write(char c);
int _write_str(char *s);
int prnt_str(va_list a, flags_t *p);
int prnt_char(va_list a, flags_t *p);
int pr_percent(va_list a, flags_t *p);
int t_flag(char sp, flags_t *f);
int pr_int(va_list a, flags_t *p);
void pr_num(int n);
int _length(int i);
int prnt_unsigned(va_list a, flags_t *f);
int prnt_int_binary(va_list a, flags_t *f);
int prnt_octal(va_list a, flags_t *f);
int prnt_hex(va_list a, flags_t *f);
int prnt_hex_big(va_list a, flags_t *f);
int pr_bigS(va_list a, flags_t *f);
int pr_address(va_list a, flags_t *f);
int pr_rev(va_list a, flags_t *f);
int pr_rot13(va_list a, flags_t *f);
char *convert(unsigned long int num, int b, int lc);

#endif

