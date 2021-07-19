// Bubble_Sort.cpp :

#include <iostream>

template<size_t n>
void bubbleSort(int(&arr)[n]);
template<size_t n>
void printArray(int(&arr)[n]);

int main()
{
	int arr[] = { 64, 34, 92, 12, 22, 11, 90 };
	std::cout << "Array: ";
	printArray(arr);
	bubbleSort(arr);
	std::cout << "Sorted array: ";
	printArray(arr);
	return 0;
}
template<size_t n>
void bubbleSort(int(&arr)[n])
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = n - 1; j >= i + 1; --j)
		{
			if (arr[j] > arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
			}
		}
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
