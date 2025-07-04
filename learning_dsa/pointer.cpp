#include <iostream>
#include <vector>
using namespace std;

// ✅ Check if a pair exists with the given sum
bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "✅ Pair found: " << arr[left] << " + " << arr[right] << " = " << target << endl;
            return true;
        } else if (sum < target) {
            left++;  // Need a larger number
        } else {
            right--; // Need a smaller number
        }
    }

    return false; // ❌ No pair found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 9}; // Must be sorted
    int target = 10;

    if (!hasPairWithSum(arr, target)) {
        cout << "❌ No pair with sum " << target << " found." << endl;
    }

    return 0;
}
