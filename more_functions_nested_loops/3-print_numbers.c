#include "print_numbers.h"
#include "_putchar.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
_putchar(digit);
if (digit != '9')
_putchar('\n');
}
}
