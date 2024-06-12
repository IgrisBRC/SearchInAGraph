main: main.o BFS.o
	clang -o main main.o BFS.o

main.o: main.c graph.h
	clang -c main.c

BFS.o: BFS.c graph.h
	clang -c BFS.c

clean: 
	rm main main.o BFS.o
