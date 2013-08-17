namespace quicksort
{
	template <class T> int getMedianIndex( std::vector<T> &items, int firstIndex, int secondIndex, int thirdIndex );

	template <class T> void swap( std::vector<T> &items, int firstIndex, int secondIndex );

	template <class T> int partition( std::vector<T> &items, int leftIndex, int rightIndex, int pivotIndex );

	template <class T> void quicksort( std::vector<T> &items, int left, int right );
}
