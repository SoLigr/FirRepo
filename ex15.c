#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = {23, 43, 12, 15};
    //remember that each string is considered an array. 
    //Therefore names is an array of arrays
    char *names[] = {
        "Alan", "Frank",
        "Grank", "Monkey Spanker"
    };

    int count = sizeof(ages)/sizeof(int);
    int i = 0;

    //example of using indexing
    for(i=0; i < count; i++){
        printf("%s has been alive for %d years.\n",names[i], ages[i]);
    }

    printf("\n -----------------------\n");

    //pointers are setup to the beginning of the array
    
    int *cur_age = ages;
    //cur_name is pointed towards a pointer
    char **cur_name = names;

    for(i=0; i<count; i++){
        printf("%s is %d years old.\n", *(cur_name  + i), *(cur_age +i));
    }

    printf("------\n");

    //using pointers as arrays
    for(i=0; i<count; i++){
        printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
    }

    printf("---\n");

    return 0;
    
}