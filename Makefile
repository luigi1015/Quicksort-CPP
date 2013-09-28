all: QuickSort.o Test

QuickSort.o: QuickSort.cpp
	g++ -Wall -c QuickSort.cpp

Test: QuickSort.o quicksortTest.cpp
	g++ -Wall -o Test quicksortTest.cpp QuickSort.o -lcppunit

clean:
	rm Test *~ *.o *.gch
