#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num, i, expo = 1;
if (!b || !*b)
return (0);
i = 0;
while (b[i])
{
if (b[i] - 48 > 1)
return (0);
i++;
}
i--;
num = 0;
do {
num += (b[i] - '0') * expo;
expo *= 2;
} while (i--);
return (num);
}


