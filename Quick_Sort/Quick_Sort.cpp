// Quick_Sort.cpp : 

#include <iostream>

void QuickSort(int* arr, int left, int right);
int Partition(int* arr, int left, int right);

int main()
{
    int arr[] = { 2,7,1,3,5};
    int size = sizeof(arr) / sizeof(int);
    QuickSort(arr, 0, size-1);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i]<<" ";
    }
    return 0;
}

void QuickSort(int* arr, int left, int right)
{
    if (left < right)
    {
        int mid = Partition(arr, left, right);
        QuickSort(arr, left, mid - 1);
        QuickSort(arr, mid + 1, right);
    }
}

int Partition(int* arr, int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; ++j)
    {
        if (arr[j] <= pivot)
        {
            i = i + 1;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[right]);
    return i + 1;
}