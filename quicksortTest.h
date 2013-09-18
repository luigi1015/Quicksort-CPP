#include "cppunit/TestCase.h"
#include "quicksort.cpp"
#include <vector>

class QuickSortTest : public CppUnit::TestCase 
{
	public:
		void runTest()
		{//Basic Test of the Quicksort method.
			//Set up the input.
			std::vector<int> A;
			A.push_back(5);
			A.push_back(2);
			A.push_back(4);
			A.push_back(6);
			A.push_back(1);
			A.push_back(3);
			
			//Sort the data.
			QuickSort::quickSort(A, 0, A.size()-1);
			
			//Verify the output.
			CPPUNIT_ASSERT( A.at(0) = 1 );
			CPPUNIT_ASSERT( A.at(1) = 2 );
			CPPUNIT_ASSERT( A.at(2) = 3 );
			CPPUNIT_ASSERT( A.at(3) = 4 );
			CPPUNIT_ASSERT( A.at(4) = 5 );
			CPPUNIT_ASSERT( A.at(5) = 6 );
		}
};
			
			
