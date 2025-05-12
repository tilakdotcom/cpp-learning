#include <iostream>
#include <vector>
using namespace std;

// ---------------------- Binary Search ----------------------
int binarySearch(const vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1; // Not found
}

// ---------------------- Merge Two Sorted Arrays ----------------------
vector<int> mergeArrays(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> merged;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i++]);
        } else {
            merged.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        merged.push_back(a[i++]);
    }

    while (j < b.size()) {
        merged.push_back(b[j++]);
    }

    return merged;
}

// ---------------------- Main Function ----------------------
int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    // Merge arrays
    vector<int> mergedArray = mergeArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    // Binary Search
    int target = 6;
    int index = binarySearch(mergedArray, target);

    if (index != -1) {
        cout << "Element " << target << " found at index: " << index << endl;
    } else {
        cout << "Element " << target << " not found." << endl;
    }

    return 0;
}