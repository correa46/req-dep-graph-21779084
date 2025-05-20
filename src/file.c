#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

//open a file
void open_file(char *fileName, FILE *FILE) {
    //STUB NEEDS TO BE IMPLEMENTED
    //Will open a file and check if it's not empty
    //If empty, the output will be an error ELSE it will continue

    return 1;
}

//close a file
void close_file(FILE *FILE) {
    //STUB NEEDS TO BE IMPLEMENTED
    //Will close the file entered by the user
    return 1;
}

//read each line from the file and pass to the parse module for analysis
int read_file(FILE *FILE) {
    //STUB NEEDS TO BE IMPLEMENTED
    //will go through each line of the file
    //pass line to the parse module for further analysis
    //(seperation of requirements and dependencies between requirements)

    return 1; //if eveything was passed correctly
}

//write report to a file
void write_report(FILE *Report, char *line) {
    //STUB NEEDS TO BE IMPLEMENTED
    //Writes the output report to a file
    //Recieves a string and wirtes it to the file in the order it receives the string

    return Report; //return the report for the user
}


