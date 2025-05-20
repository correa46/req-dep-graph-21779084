all : REQ-DEP_GRAPH-21779084

REQ-DEP_GRAPH-21779084: main.o file.o parse.o dependency_graph.o
	gcc -Wall -std=c11 -o REQ-DEP_GRAPH-21779084 main.o file.o parse.o dependency_graph.o -lm 

main.o: main.c file.h parse.h dependency_graph.h
	gcc -Wall -g -std=c11 -c main.c -lm 

file.o: file.c file.h
	gcc -Wall -g -std=c11 -c file.c -lm

parse.o: parse.c parse.h
	gcc -Wall -g -std=c11 -c parse.c -lm

dependency_graph.o: dependency_graph.c dependency_graph.h
	gcc -Wall -g -std=c11 -c dependency_graph.c -lm

clean:
	rm -f *.o REQ-DEP_GRAPH-21779084 main.o file.o parse.o dependency_graph.o
