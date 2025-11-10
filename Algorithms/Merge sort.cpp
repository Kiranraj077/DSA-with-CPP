#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int>& arr, int left, int mid, int right) {
    // Create temporary vectors for left and right halves
    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;

    // Merge the two halves back into arr
    while (i < L.size() && j < R.size()) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements (if any)
    while (i < L.size()) arr[k++] = L[i++];
    while (j < R.size()) arr[k++] = R[j++];
}

// Recursive merge sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return; // base case (1 element)

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);       // sort left half
    mergeSort(arr, mid + 1, right);  // sort right half
    merge(arr, left, mid, right);    // merge the sorted halves
}
