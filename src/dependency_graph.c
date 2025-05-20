#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dependency_graph.h"

//Create a dependency graph
int dependency_graph(char *info) {
    //STUB NEEDS TO BE IMPLEMENTED
    //will recieve dependency information from parse module 
    //according to a certain format will organize the information
    //and create a dependency graph

    //send each line of the dependency graph to the send dependencies graph module 
    //to write to the output file
    return 1; //if everything was passed correctly
}


//Send dependencies to be written in the output file
void send_dependencies(char *line) {
    //STUB NEEDS TO BE IMPLEMENTED
    //sends each line passed by the dependency graph module to the wirte report function
    //of the file module to write the output report

    return 1; //if everything was passed correctly
}