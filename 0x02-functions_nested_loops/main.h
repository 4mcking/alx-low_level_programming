#ifndef MAIN_H
#define MAIN_H

/*
 ** File: main.h
 ** Auth: McKing
 ** Desc: Header file containing declarations for all functions used in the 0x02-functions_nested_loops directory.
 */

/*
 ** _putchar - writes the character c to std
 ** @c: parameter to compare
 ** Return: 1 or 0
 */
int _putchar(char c);

/*
 ** print_alphabet - function to print lowercase alphabet
 **
 */
void print_alphabet(void);

/*
 ** print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void);

/*
 ** _islower - prints if c is lower case
 ** @c: character to use
 ** Return: 1 or 0
 */
int _islower(int c);

/*
 ** _isalpha - prints if character is alphabet
 ** @c: character to use
 ** Return: 1 or 0
 */
int _isalpha(int c);

/*
 ** print_sign - prints a sign based on n
 ** @n: integer to input
 ** Return: 1 or 0  or -1
 */
int print_sign(int n);

/*
 ** _abs - gives absolute value
 ** @int: integer
 ** Return: integer or abs value of int
 */
int _abs(int);

/*
 ** print_last_last - prints last digit of integer
 **
 ** @int: integer to input
 ** Return: last digit of integer
 */
int print_last_digit(int);

/*
 ** jack_bauer - print every minute of a day
 ** Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void);

/*
 ** times_table - print multiplication table
 */
void times_table(void);

/*
 ** add - add two integers
 ** @a: first integer
 ** @b: second integer
 ** Return: sum
 */
int add(int, int);

/*
 ** print_to_98 - print numbers n to 98
 ** @n: integer argument
 */
void print_to_98(int n);

/*
 ** print_times_table - print multiplication table up to n
 ** @n: integer argument
 */
void print_times_table(int n);

#endif
