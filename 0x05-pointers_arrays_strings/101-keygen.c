#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - randem password
 * Return: 0 
 */
int main()
{
int pass, sum;
sum = 0;
while (sum <= 2645)
{
pass = (rand() % 128);
sum += pass;
printf("%c", pass);
}
printf("%c", 2772 - sum);
return (0);
}
