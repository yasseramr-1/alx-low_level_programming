#include "main.h"
#include <stdio.h>
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s) {
int length = _strlen(s);
for (int i = length - 1; i >= 0; i--) {
printf("%c", s[i]);
}
printf("\n");
}
