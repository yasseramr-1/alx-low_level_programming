#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - This code prints the alphabet in lowercase except
* e and q
*
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
int c = 0;
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + c);
c++;
}
putchar('\n');
return (0);
}
