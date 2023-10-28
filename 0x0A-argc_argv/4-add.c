#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int
 
check_num(char *str)

{
    unsigned
 
int count;

    count = 0;
    while (count < strlen(str)) {
        if (!isdigit(str[count])) {
            return
 
0;
        }

        count++;
    }

    return
 
1;
}

/**
 * main - Print the sum of all the command-line arguments
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int
 
main(int argc, char *argv[])

{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc) {
        if (check_num(argv[count])) {
            str_to_int = atoi(argv[count]);
            sum += str_to_int;
        } else {
            printf("Error\n");
            return
 
1;
        }

        count++;
    }

    printf("%d\n", sum);

    return 0;
}
