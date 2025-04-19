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
