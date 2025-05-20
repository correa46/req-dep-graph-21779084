#ifndef FILE_H
#define FILE_H

//open a file and check if empty, if not empty, continue else return an error
void open_file(char *fileName, FILE *FILE);

//close the file entered by the user
void close_file(FILE *FILE);

//read each line from the input file and pass to the parse module for further analysis
int read_file(FILE *FILE);

//write report to an output file by writing to the file in the order
//the string is received
void write_report(FILE *Report, char *line);

#endif