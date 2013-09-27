#ifndef Quicksort_CPP
#define Quicksort_CPP

#include <vector>
namespace QuickSort
{
	template <class T> int getMedianIndex( std::vector<T> &items, int firstIndex, int secondIndex, int thirdIndex )
	{//Returns the index of the median value of the values at the three indexes or thirdIndex.
		if( (items.at(firstIndex) <= items.at(secondIndex)) && (items.at(firstIndex) >= items.at(thirdIndex)) )
		{//The object at firstIndex is a median of the three because it's less than or equal to the object at secondIndex and greater than or equal to the object at thirdIndex. Since it counts as a median, return it.
			return firstIndex;
		}
		else if( (items.at(firstIndex) >= items.at(secondIndex)) && (items.at(firstIndex) <= items.at(thirdIndex)) )
		{//The object at firstIndex is a median of the three because it's greater than or equal to the object at secondIndex and less than or equal to the object at thirdIndex. Since it counts as a median, return it.
			return firstIndex;
		}
		else if( (items.at(secondIndex) <= items.at(firstIndex)) && (items.at(secondIndex) >= items.at(thirdIndex)) )
		{//The object at secondIndex is a median of the three because it's less than or equal to the object at firstIndex and greater than or equal to the object at thirdIndex. Since it counts as a median, return it.
			return secondIndex;
		}
		else if( (items.at(secondIndex) >= items.at(firstIndex)) && (items.at(secondIndex) <= items.at(thirdIndex)) )
		{//The object at secondIndex is a median of the three because it's greater than or equal to the object at firstIndex and less than or equal to the object at thirdIndex. Since it counts as a median, return it.
			return secondIndex;
		}
		else
		{//thirdIndex is probably the median if execution is here, but even if it's not the method needs to return something so might as well be thirdIndex.
			return thirdIndex;
		}
	}

	template <class T> void swap( std::vector<T> &items, int firstIndex, int secondIndex )
	{//Swap items at first and second index.
		T tempVal = items.at(firstIndex);
		items.at(firstIndex) = items.at(secondIndex);
		items.at(secondIndex) = tempVal;
	}

	template <class T> int partition( std::vector<T> &items, int leftIndex, int rightIndex, int pivotIndex )
	{//Sort from left to right around pivot.
		int newIndex = leftIndex;
		T pivVal = items.at(pivotIndex);
		swap(items, pivotIndex, rightIndex );

		for( int i = leftIndex; i < rightIndex; i++ )
		{
			if( items.at(i) < pivVal )
			{//If the element at index i is less than the pivot value, it should be before the pivot, so switch it.
				swap( items, i, newIndex );
				newIndex++;
			}
		}

		//Move pivot from location right to the location it should end up.
		swap( items, newIndex, rightIndex );

		return newIndex;
	}

	template <class T> void quickSort( std::vector<T> &items, int left, int right )
	{//Main quicksort function. Call this to sort a list of items.
		int pivotPoint, newPivotPoint;
		if( left < right )
		{//If the list has at least 2 more items, keep running quicksort.
			pivotPoint = getMedianIndex( items, left, (left+right)/2, right );//Get the median of the left, middle and right.
			newPivotPoint = partition( items, left, right, pivotPoint );
			quickSort( items, left, newPivotPoint - 1 );
			quickSort( items, newPivotPoint + 1, right );
		}
	}
}

#endif /* Quicksort_CPP */
