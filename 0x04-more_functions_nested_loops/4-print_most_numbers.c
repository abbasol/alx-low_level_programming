#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: returns nothing
 */
int print_most_numbers(void)
{
int numer;
for (number = 48; number < 58; number++)
{
if ((number == 50) || (number == 52))
{
continue;
}
_putchar(number);
}
_putchar(10);
}
