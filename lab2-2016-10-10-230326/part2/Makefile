EXECUTABLE= mergesort

$(EXECUTABLE):mergesort_main.o merge.o
	gcc mergesort_main.o merge.o -g -o mergesort

mergesort_main.o: mergesort_main.c merge.h
	gcc -c -g -Wall mergesort_main.c merge.h

merge.o: merge.c merge.h
	gcc -c -g -Wall merge.c merge.h

.PHONY:clean

clean:
	rm -f *.o a.out core mergesort

.PHONY:all
all: clean mergesort
