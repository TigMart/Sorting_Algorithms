// Merge_Sort.cpp :

#include <iostream>

void Merge(int* arr, int const left, int const mid, int const right);
void Merge_Sort(int* arr, int left, int right);

int main()
{
    int arr[5] = { 2,2,3,8,9};
    int arr_size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
    Merge_Sort(arr, 0, arr_size-1);
    std::cout << std::endl << "sorted: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
}

void Merge(int* arr, int const left, int const mid, int const right)
{
    int left_size = mid - left+1;
    int right_size = right - mid;
    int* left_arr = new int[left_size];
    int* right_arr = new int[right_size];
    for (int i = 0; i < left_size; ++i)
    {
        left_arr[i] = arr[left + i];
    } 
    for (int j = 0; j < right_size; ++j)
    {
        right_arr[j] = arr[mid + 1 + j];
    }
    int index_left = 0;
    int index_right = 0;
    for (int i = left; i <= right; ++i)
    {
        
        if ((index_left<left_size)&&((index_right==right_size)||(left_arr[index_left] <= right_arr[index_right])))
        {
            arr[i] = left_arr[index_left];
                ++index_left;
        }
        else {
            arr[i] = right_arr[index_right];
                ++index_right;
        }
    }
}

void Merge_Sort(int* arr, int left, int right)
{
    if (left >= right)
        return;
    int mid = (right+left) / 2;
    Merge_Sort(arr, left, mid);
    Merge_Sort(arr, mid+1, right);
    Merge(arr, left, mid, right);
}