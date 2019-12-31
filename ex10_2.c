#include <stdio.h>

int main(int argc, char *argv[])
{
    //checks to see if there was an argument given in addition to running the code
    if (argc != 2){
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    int i = 0;
    //process the string until it sees the null byte at the end of the string '\0'
    //this is a reminder that every string, list, and array in C ends in a null byte
    for (i = 0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];

        /*
        Switch statements keep running until they encounter a break in the code therefore they are pretty fast
        they only work off of constants in C, therefore you cannot give it an expression like i>10.
        This is considered a jump table.
        */
        switch(letter){
            case 'a':
            case 'A':
                printf("A\n");
                break;
            
            case 'e':
            case 'E':
                printf("E\n");
                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
}