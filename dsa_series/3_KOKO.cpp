#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to check if Koko can finish all bananas
// at the current speed 'k' within 'h' hours
bool canEatAll(const vector<int>& piles, int h, int k) {
    int totalHours = 0;

    for (int bananas : piles) {
        // Use ceil division: (bananas + k - 1) / k
        totalHours += (bananas + k - 1) / k;
    }

    return totalHours <= h;
}

// Binary search to find the minimum eating speed
int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());
    int answer = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canEatAll(piles, h, mid)) {
            answer = mid;     // It's possible → try smaller k
            high = mid - 1;
        } else {
            low = mid + 1;    // Not possible → need higher speed
        }
    }

    return answer;
}

int main() {
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int result = minEatingSpeed(piles, h);
    cout << "Minimum speed Koko needs = " << result << " bananas/hour" << endl;

    return 0;
}
