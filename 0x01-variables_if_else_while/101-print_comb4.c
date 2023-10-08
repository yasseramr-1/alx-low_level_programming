#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - This code prints all possible
* different combinations of three digits
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
int i, j = 1, b = 1, k = 2;
for (i = 0 ; i < 9 ; i++)
{
for ( ; j < 10 ; j++)
{
for (k = j + 1 ; k < 10 ; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i == 7 && j == 8 && k == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
b++;
j = b;
k = j + 1;
}
putchar('\n');
return (0);
}
