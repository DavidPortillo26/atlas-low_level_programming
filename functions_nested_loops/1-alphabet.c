#include "main.h"
#include <stdio.h>

/* 
 * main - alphabet thing
 *
 * Return: always success(0)
 */
int _putchar(char c);

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	_putchar(letter);

	_putchar('\n');
	return (0);
}

/* 
 * _putchar - definition
 *
 * Return: putchar(c)
 */
int _putchar(char c)
{
	return (putchar(c));
}
