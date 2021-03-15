CC	:= gcc

all: 
	$(CC) ./Solver.c -o ./pq-solver

clean: 
	rm -f pq-solver
