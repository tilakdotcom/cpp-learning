#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For accumulate()

using namespace std;

// Helper function to check if it's possible to paint all boards
// with the given maxTime limit using k painters
bool isPossible(vector<int> &boards, int k, int maxTime) {
    int painterCount = 1;
    int timeSum = 0;

    for (int length : boards) {
        // If a single board is greater than maxTime, it's impossible
        if (length > maxTime) return false;

        // If current painter can't take this board, assign to next
        if (timeSum + length > maxTime) {
            painterCount++;
            timeSum = length;

            // If painters exceed k, return false
            if (painterCount > k) return false;
        } else {
            timeSum += length;  // Assign to current painter
        }
    }
    return true;
}

// Main function to find the minimum time to paint all boards
int painterPartition(vector<int> &boards, int k) {
    if (boards.size() < k)
        return *max_element(boards.begin(), boards.end());

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(boards, k, mid)) {
            result = mid;       // Found a valid solution
            high = mid - 1;     // Try to find a better (smaller) time
        } else {
            low = mid + 1;      // Increase time because mid was too small
        }
    }

    return result;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int painters = 2;

    int answer = painterPartition(boards, painters);
    cout << "Minimum time to paint all boards = " << answer << endl;

    return 0;
}
