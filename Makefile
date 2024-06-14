main: main.o DFS.o queue.o BFS.o
	cc -ggdb -fsanitize=address -Wall -Werror=implicit-function-declaration -o main main.o DFS.o queue.o BFS.o

main.o: main.c graph.h
	cc -ggdb -fsanitize=address -Wall -Werror=implicit-function-declaration -c main.c

DFS.o: DFS.c graph.h
	cc -ggdb -fsanitize=address -Wall -Werror=implicit-function-declaration -c DFS.c

BFS.o: BFS.c BFS.h
	cc -ggdb -fsanitize=address -Wall -Werror=implicit-function-declaration -c BFS.c

queue.o: queue.c queue.h
	cc -ggdb -fsanitize=address -Wall -Werror=implicit-function-declaration -c queue.c


release_main: release_main.o release_DFS.o
	cc -o release_main release_main.o release_DFS.o -O2

release_main.o: main.c graph.h
	cc -c -o release_main.o main.c -O2

release_DFS.o: DFS.c graph.h
	cc -c -o release_DFS.o DFS.c -O2

clean: 
	rm main main.o DFS.o  queue.o BFS.o\
		release_main release_main.o release_DFS.o \
