#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase form
 */
void print_alphabet(void)
{
char c = 'a';
int i;
for ( i = 0; i < 26; i++)
{
putchar(c);
c++;
}
putchar('\n');
}
