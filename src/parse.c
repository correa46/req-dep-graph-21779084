#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parse.h"
#include "file.h"

//analyze each line from the file module
void check_line(char *line) {
    //STUB NEEDS TO BE IMPLEMENTED
    //will check if line sent by file module is not empty
    //if emoty, return error
    return 1; //if everything was passed correctly
}


//check if the line passed by the file module is valid
//send the correct dependency information to the dependency graph module
void checkAndSend_dependencies(char *line) {
    //STUB NEEDS TO BE IMPLEMENTED
    //checks the line for dependencies between requirements according to a certain format
    //will send reults to the dependency graph module for the creation of the graph
    //send to dependency graph module in an easier format to organize
    return 1; //if everything was passed correctly
}