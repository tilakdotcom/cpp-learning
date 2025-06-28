#include <iostream>
#include <vector>
#include <numeric>   // for accumulate
#include <algorithm> // for max_element
using namespace std;

// Helper: Can we ship with this capacity in D days?
bool isPossible(vector<int>& weights, int D, int capacity) {
    int days = 1;         // Start with 1st day
    int currentLoad = 0;  // Current weight on ship

    for (int weight : weights) {
        if (currentLoad + weight > capacity) {
            days++;               // Need one more day
            currentLoad = weight; // Start next day with this package
            if (days > D) return false;
        } else {
            currentLoad += weight; // Load onto current day
        }
    }

    return true; // Able to ship in D days with given capacity
}

// Main function
int shipWithinDays(vector<int>& weights, int D) {
    int low = *max_element(weights.begin(), weights.end());        // Heaviest package
    int high = accumulate(weights.begin(), weights.end(), 0);      // All packages in 1 day
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid overflow

        if (isPossible(weights, D, mid)) {
            result = mid;      // Try to minimize capacity
            high = mid - 1;
        } else {
            low = mid + 1;     // Increase capacity
        }
    }

    return result;
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int D = 5;

    int answer = shipWithinDays(weights, D);
    cout << " Minimum capacity to ship within " << D << " days = " << answer << endl;

    return 0;
}
