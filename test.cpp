#include <vector>
#include "QuickSort.cpp"
#include <iostream>

template <class T> void printVector( std::vector<T> items )
{//Print a vector, one item per line.
	for( unsigned int i = 0; i < items.size(); i++ )
	{
		std::cout << items.at(i) << " ";
	}
	std::cout << std::endl;
}

int main( int argc, const char* argv[] )
{//Test out the Quicksort.
	std::vector<int> A;
	A.push_back(5);
	A.push_back(2);
	A.push_back(4);
	A.push_back(6);
	A.push_back(1);
	A.push_back(3);
	
	std::cout << "Before sort:" << std::endl;
	printVector<int>(A);
	std::cout << std::endl;
	
	QuickSort::quickSort<int>(A, 0, A.size()-1);
	
	std::cout << "After sort:" << std::endl;
	printVector<int>(A);
	
	return 0;
}
