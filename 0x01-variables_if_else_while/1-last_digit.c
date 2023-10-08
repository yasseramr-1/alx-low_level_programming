#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main- This code checks the last digit of a number
 * and prints is 0 if it is 0 
 * and is greater than 5 if it is greater than 5
 * and is less than 6 and not 0 otherwise
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void) {
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
printf("%d ", n % 10);

if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf("and is 0\n");
} 
else 
{
printf("and is less than 6 and not 0\n");
}

  return (0);
}
