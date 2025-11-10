#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // optimization: check if array is already sorted

        // Inner loop for pairwise comparison
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in this pass, array is sorted
        if (!swapped) break;
    }
}

