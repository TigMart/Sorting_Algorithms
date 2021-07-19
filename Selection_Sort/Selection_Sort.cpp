// Selection_Sort.cpp :

#include <iostream>

template<size_t n>
void SelectionSort(int(&arr)[n]);

template<size_t n>
void printArray(int(&arr)[n]);

int main()
{
	int arr[] = { 64, 34, 92, 12, 22, 11, 90 };
	std::cout << "Array: ";
	printArray(arr);
	SelectionSort(arr);
	std::cout << "Sorted array: ";
	printArray(arr);
	return 0;
}
template<size_t n>
void SelectionSort(int(&arr)[n])
{
	for (int i = 0; i < n - 1; ++i)
	{
		int max_index = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[max_index] < arr[j])
				max_index = j;
		}
		std::swap(arr[i], arr[max_index]);
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

