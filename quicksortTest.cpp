#include <iostream>
#include "quicksortTest.h"

int main()
{
	try
	{
		QuickSortTest test;
		test.runTest();
		std::cout << "Success!" << std::endl;
		return 0;
	}
	catch(...)
	{
		std::cout << "Failure!" << std::endl;
		return 1;
	}
}
	
		
