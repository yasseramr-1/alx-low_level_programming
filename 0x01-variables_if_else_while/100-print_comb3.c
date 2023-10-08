#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - This code prints all possible
* different combinations of two digits
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
int i,j=1,b=1;
for(i = 0 ; i < 9 ; i++)
{
for( ; j < 10 ; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
}
b++;
j=b;
}
putchar('\n');
return (0);
}
