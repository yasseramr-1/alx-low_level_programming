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
char c = 'a';
char e = 'A';
int i;
for (i = 0; i < 26; i++)
{
if ( c == 'e' || c == 'q')
{
c++;
continue;
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
