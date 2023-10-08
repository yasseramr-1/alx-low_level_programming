#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - This code prints the alphabet in lowercase
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
int b = 0;
int i;
for (i = 0; i < 10; i++)
{
putchar('0'+b);
if (i != 9)
{
putchar(',');
putchar(' ');
}

b++;
}
putchar('\n');
return (0);
}
