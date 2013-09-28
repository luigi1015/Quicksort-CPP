all: quicksort.o Test

quicksort.o: quicksort.cpp
	g++ -Wall -c quicksort.cpp

Test: quicksort.o quicksortTest.cpp
	g++ -Wall -o Test quicksortTest.cpp quicksort.o -lcppunit

clean:
	rm Test *~ *.o *.gch
