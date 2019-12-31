#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10,12,14,20};
    areas[0] = 100;
    char first_name[] = "Brandon";
    char *Full_name = "Brandon Greenwell";
    char Fir_name[] = {'B', 'r','a','n','d','o','n','\0'};
    
    int areas_length = sizeof(areas)/sizeof(int);
    for(int i =0; i<areas_length; i++){
        printf("%d\n", areas[i]);
    }
    printf("The size of the areas is: %ld\n", sizeof(areas));
    printf("The size of first name as a string: %ld\n"
    "vs the size of the firstname as an array of characters: %ld\n",
     sizeof(first_name), sizeof(Fir_name));

    printf("Number of integers in areas: %ld\n", sizeof(areas)/sizeof(int));
    printf("Number of characters in the first name as a string: %ld\n", sizeof(first_name)/sizeof(char));
    printf("Number of characters in the array of characters: %ld\n", sizeof(Fir_name)/sizeof(char));

    return 0;
}