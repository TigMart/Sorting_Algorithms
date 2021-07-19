// Insertion_Sort.cpp : 

#include <iostream>

template<size_t n>
void InsertionSort(int(&arr)[n]);

template<size_t n>
void printArray(int(&arr)[n]);

int main()
{
	int arr[] = { 64, 34, 92, 12, 22, 11, 90 };
	std::cout << "Array: ";
	printArray(arr);
	InsertionSort(arr);
	std::cout << "Sorted array: ";
	printArray(arr);
	return 0;
}
template<size_t n>
void InsertionSort(int(&arr)[n])
{
	for (int i = 1; i < n; ++i)
	{
		int j = i - 1;
		int key = arr[i];
		while (arr[j] < key && j >= 0)
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = key;
	}

}

template<size_t n>
void printArray(int(&arr)[n])
{

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

