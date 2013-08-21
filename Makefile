all: Quicksort

Quicksort: quicksort.cpp quicksort.h
	g++ -Wall -c quicksort.cpp

Test: quicksort.cpp quicksort.h test.cpp
	g++ -Wall -o Test quicksort.cpp test.cpp

clean:
	rm Test *~
