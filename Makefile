main: main.o BFS.o
	cc -g -o main main.o BFS.o

main.o: main.c graph.h
	cc -g -c main.c

BFS.o: BFS.c graph.h
	cc -g -c BFS.c

release_main: release_main.o release_BFS.o
	cc -o release_main release_main.o release_BFS.o -O2

release_main.o: main.c graph.h
	cc -c -o release_main.o main.c -O2

release_BFS.o: BFS.c graph.h
	cc -c -o release_BFS.o BFS.c -O2

clean: 
	rm main main.o BFS.o \
		release_main release_main.o release_BFS.o
