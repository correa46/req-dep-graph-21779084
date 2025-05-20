#ifndef PARSE_H
#define PARSE_H

//Depends on file module for information
#include "file.h"

//analyze each line from the file module, if empty it will return error
void check_line(char *line);

//will check if the line by the file module passed to this function is valid
//then sends the dependency information to the dependency graph module for the 
//creation of the outputgraph
void checkAndSend_dependencies(char *line);

#endif