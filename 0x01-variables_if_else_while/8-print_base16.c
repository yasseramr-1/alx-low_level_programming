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
char c = 'A';
int b = 0;
int i;
for (i = 0; i < 16; i++)
{
if(i <= 9)
{
putchar('0'+b);
b++;
}
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
