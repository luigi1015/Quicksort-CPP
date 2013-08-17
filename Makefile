all: Quicksort

Quicksort: quicksort.cpp quicksort.h
	g++ -Wall -c quicksort.cpp

clean:
	rm Quicksort *~
