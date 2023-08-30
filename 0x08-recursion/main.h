#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x08-Recursion directory.
 */

/* prints a single character to the standard output */
int _putchar(char c);

/* prints a string to the standard output using recursion */
void _puts_recursion(char *s);

/* prints a string in reverse to the standard output using recursion */
void _print_rev_recursion(char *s);

/* calculates the length of a string using recursion */
int _strlen_recursion(char *s);

/* calculates the factorial of a given number using recursion */
int factorial(int n);

/* calculates the value of x raised to the power of y using recursion */
int _pow_recursion(int x, int y);

/* calculates the square root of a given number using recursion */
int _sqrt_recursion(int n);

/* determines whether a given number is prime or not using recursion */
int is_prime_number(int n);

/* determines whether a given string is a palindrome or not using recursion */
int is_palindrome(char *s);

/* compares two strings, one of which may contain wildcard characters, using recursion */
int wildcmp(char *s1, char *s2);

#endif
