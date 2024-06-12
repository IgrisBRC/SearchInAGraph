main: main.o graph.o
	clang -o main main.o graph.o

main.o: main.c graph.h
	clang -c main.c

graph.o: graph.c graph.h
	clang -c graph.c

clean: 
	rm main main.o graph.o
