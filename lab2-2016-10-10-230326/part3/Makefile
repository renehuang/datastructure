EXECUTABLE= merge-trace

$(EXECUTABLE):mergesort_main.o merge.o
	gcc mergesort_main.o merge.o -g -o merge-trace -lm

mergesort_main.o: mergesort_main.c
	gcc -c -g -Wall mergesort_main.c

merge.o: merge.c merge.h
	gcc -c -g -Wall merge.c

.PHONY:clean

clean:
	rm -f *.o a.out core merge-trace

.PHONY:all
all: clean mergesort
