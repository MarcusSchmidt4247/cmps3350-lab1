// CMPS 3350 - lab 1 is all about source control
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    printf("Oh, that's what you had to say? ...really?!\n");
    printf("Nah, I'm just messing with you. Very clever.\n");
    return 0;
}

