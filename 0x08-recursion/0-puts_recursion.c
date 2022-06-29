#include "main.h"
<<<<<<< HEAD
#include<stdio.h>
void _puts_recursion(char *s)
{
    int i=0;
    if (s[i] == "\0")
    {
        printf("\n");
    }
    else
    {
        printf("%c", s[i]);
        i++;
        _puts_recursion(s+i);
    }
=======

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
>>>>>>> e1b0c13541837547540579ca7e553d53e3f2075c
}
