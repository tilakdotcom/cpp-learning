#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper: Can we place cows with at least 'minDist' apart?
bool canPlaceCows(vector<int>& stalls, int cows, int minDist) {
    int count = 1;                // Place first cow at the first stall
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - lastPos >= minDist) {
            count++;              // Place another cow
            lastPos = stalls[i]; // Update last position
        }

        if (count >= cows)
            return true;         // Able to place all cows
    }

    return false; // Not enough distance to place all cows
}

// Main Function
int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end()); // Stall positions must be sorted

    int low = 1;                                  // Smallest possible distance
    int high = stalls.back() - stalls.front();    // Max possible distance
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, cows, mid)) {
            result = mid;    // Valid solution, try to maximize
            low = mid + 1;
        } else {
            high = mid - 1;  // Try smaller distance
        }
    }

    return result;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;

    int answer = aggressiveCows(stalls, cows);
    cout << "Largest minimum distance to place all cows = " << answer << endl;

    return 0;
}
