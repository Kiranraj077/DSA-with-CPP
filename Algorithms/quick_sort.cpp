#include <bits/stdc++.h>
using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // choose the last element as pivot
    int i = low - 1;        // index for smaller element

    for (int j = low; j < high; j++) {
        // if current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // place the pivot in its correct position
    swap(arr[i + 1], arr[high]);
    return i + 1;  // return pivot index
}

// QuickSort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // find the pivot position
        int pi = partition(arr, low, high);

        // recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
