selectionsort: selectionsort_main.o selectionsort.o
	gcc selectionsort_main.o selectionsort.o -g -o selectionsort -lm

selectionsort_main.o: selectionsort_main.c selectionsort.h
	gcc -c -g -Wall selectionsort_main.c selectionsort.h

selectionsort.o: selectionsort.c selectionsort.h
	gcc -c -g -Wall selectionsort.c selectionsort.h

.PHONY:clean

clean:
	rm -f *.o a.out core selectionsort

.PHONY:all
all: clean selectionsort
