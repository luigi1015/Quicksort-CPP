#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
#include <iostream>
#include "QuickSort.cpp"

class QuickSortTest : public CppUnit::TestCase 
{
	private:
		
	public:
		void testSortBasic()
		{//Basic Test of the Quicksort method.
			//Set up the input.
			std::vector<unsigned int> A;
			A.push_back(5);
			A.push_back(2);
			A.push_back(4);
			A.push_back(6);
			A.push_back(1);
			A.push_back(3);
			
			//Sort the data.
			QuickSort::quickSort(A, 0, A.size()-1);
			
			//Verify the output.
			for( unsigned int i = 0; i < A.size(); i++ )
			{//Check every element of A to make sure it has sorted values 1..n where n is the number of elements.
				CPPUNIT_ASSERT( A.at(i) == i+1 );
			}
		}
		
		//Create the test suite using CPPUnit macros.
		CPPUNIT_TEST_SUITE( QuickSortTest );
		CPPUNIT_TEST( testSortBasic );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeLower, std::out_of_range );
		//CPPUNIT_TEST_EXCEPTION( testPossibleOutOfRangeUpper, std::out_of_range );
		CPPUNIT_TEST_SUITE_END( );
};

int main()
{
	CPPUNIT_TEST_SUITE_REGISTRATION( QuickSortTest );
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry( );
	runner.addTest( registry.makeTest( ) );
	if ( runner.run( ) )
	{//Runner had success.
		return 0;
	}
	else
	{//Runner failed.
		return 1;
	}
}
	
		
