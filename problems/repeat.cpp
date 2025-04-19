#include <iostream>
#include <vector>
using namespace std;

// ------------------ First Occurrence Binary Search ------------------
int firstOccurrence(const vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            result = mid;      // Save the index
            end = mid - 1;     // Keep checking in left part
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return result;
}

// ------------------ Merge Function for Merge Sort ------------------
void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= end) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        arr[start + k] = temp[k];
    }
}

// ------------------ Merge Sort ------------------
void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

// ------------------ Main Function ------------------
int main() {
    vector<int> arr = {5, 3, 8, 3, 9, 1, 3, 6};

    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Sort using Merge Sort
    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    // Find first occurrence of a number
    int target = 3;
    int index = firstOccurrence(arr, target);

    if (index != -1)
        cout << "First occurrence of " << target << " at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}