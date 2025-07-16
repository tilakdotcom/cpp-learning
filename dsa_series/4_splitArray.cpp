#include <iostream>
#include <vector>
using namespace std;

bool canSplitIntoTwoEqualSumSubarrays(vector<int>& arr) {
    int totalSum = 0;
    for (int num : arr) totalSum += num;

    int prefixSum = 0;
    for (int i = 0; i < arr.size() - 1; ++i) {
        prefixSum += arr[i];
        if (prefixSum == totalSum - prefixSum) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 3};
    
    if (canSplitIntoTwoEqualSumSubarrays(arr)) {
        cout << "Yes, can be split into two equal sum subarrays." << endl;
    } else {
        cout << "No, cannot be split into two equal sum subarrays." << endl;
    }

    return 0;
}
