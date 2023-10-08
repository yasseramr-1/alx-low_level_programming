#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/*
*main- This code prints the alphabet in lowercase
*
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
char c = 'a';
int i;
for(i = 0; i < 26; i++)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
