#ifndef DEPENDENCY_GRAPH_H
#define DEPENDENCY_GRAPH_H

//Depends on parse module for information
#include "parse.h"

//recieve dependency information from the parse module and create a dependency graph
//line by line which will be send to the send dependencies function
//to write to the report
int dependency_graph(char *info);


//Send the dependency information reciives by dependency_graph module
//to be written in the report file
void send_dependencies(char *line);

#endif