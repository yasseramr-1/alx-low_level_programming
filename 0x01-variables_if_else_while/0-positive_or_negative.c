#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
 * main- This code generates a random number and it determines if the number is positive, negative or equals to zero
 *
 * Return Always 0 (SUCCESS)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
