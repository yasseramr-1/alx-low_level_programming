#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - This code prints the alphabet in lowercase then
* uppercase
*
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
char c = 'a';
char e = 'A';
int i;
for (i = 0; i < 52; i++)
{
if (i >= 26)
{
putchar(e);
e++;
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
