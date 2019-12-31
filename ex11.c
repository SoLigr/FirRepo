#include <stdio.h>

/*
This exercise is to showcase the effect of the null character inside of a list and string.
*/

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char letters[4] = {'a'};

    printf("Numbers: %d, %d, %d, %d\n", numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("Letters: %c, %c, %c, %c\n", letters[0],letters[1],letters[2],letters[3]);

    printf("name: %s\n", letters);

    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;

    letters[0] = 'a';
    letters[1] = 'b';
    letters[2] = '\0';
    letters[3] = 'h';

    printf("Numbers: %d, %d, %d, %d\n", numbers[0],numbers[1],numbers[2],numbers[3]);
    printf("Letters: %c, %c, %c, %c\n", letters[0],letters[1],letters[2],letters[3]);
    printf("Name: %s\n", letters);

    return 0;
}