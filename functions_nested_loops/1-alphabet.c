#include "main.h"
#include <stdio.h>

/* Prototype of _putchar function */
int _putchar(char c);

int main(void)
{
	char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
	return (0);
}

/* Definition of _putchar function */
int _putchar(char c)
{
	return (putchar(c));
}
