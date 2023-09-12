#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(int n)
{
    int num, mult, prod;

    if (n >= 0 && n <= 15)
    {
        for (num = 0; num <= n; num++)
        {
            for (mult = 0; mult <= n; mult++)
            {
                prod = num * mult;
                if (mult == 0)
                    _putchar('0');
                else
                    _putchar(' ');

                if (prod >= 10)
                {
                    _putchar((prod / 10) + '0');
                    _putchar((prod % 10) + '0');
                }
                else
                {
                    _putchar(' ');
                    _putchar(prod + '0');
                }

                if (mult < n)
                    _putchar(',');
                else
                    _putchar('\n');
            }
        }
    }
}
