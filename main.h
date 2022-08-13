#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print - struct for print functions.
 * @type: identifier
 * @f: pointer to print functions
 *
 * Description: stores pointer to print functions.
 */
typedef struct print
{
	char *type;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_ptg(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list, char *, unsigned int);
int print_str(va_list, char *, unsigned int);
int print_int(va_list, char *, unsigned int);
int print_binr(va_list, char *, unsigned int);
int print_untr(va_list, char *, unsigned int);
int print_oct(va_list, char *, unsigned int);
int print_hex(va_list, char *, unsigned int);
int print_upx(va_list, char *, unsigned int);
int (*get_func(const char *, int))(va_list, char *, unsigned int);
int ev_print_func(const char *, int);
unsigned int handl_buf(char *, char, unsigned int);
int print_buf(char *, unsigned int);
char *fill_bin_arr(char *, long int, int, int);
char *fill_oct_array(char *, char *);
char *fill_hex_array(char *, char *, int, int);
/*char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
*/

#endif
