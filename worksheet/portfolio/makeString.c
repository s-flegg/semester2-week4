
/*
Name: Samuel Flegg
Student ID: 202018944
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[49];
    char seperator[] = "-";

    // process the command-line data using appropriate string functions
    for (int i=1; i<argc; i++) {
        strcat(buffer, argv[i]);

        if (i != argc - 1) { // prevents trailing seperator
            strcat(buffer, seperator);
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}