all: quicksort.o Test

quicksort.o: quicksort.cpp
	g++ -Wall -c quicksort.cpp

Test: quicksort.o quicksortTest.cpp quicksortTest.h
	g++ -Wall -o Test quicksortTest.cpp quicksortTest.h quicksort.o -lcppunit

clean:
	rm Test *~ *.o *.gch
