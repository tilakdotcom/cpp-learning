#include <iostream>
#include <vector>
#include <climits>
#include<numeric>
using namespace std;

// Check if allocation is possible with maxPages
bool isPossible(vector<int> &books, int students, int maxPages) {
    int count = 1;
    int currentSum = 0;

    for (int pages : books) {
        if (pages > maxPages) return false;

        if (currentSum + pages > maxPages) {
            count++;
            currentSum = pages;
            if (count > students) return false;
        } else {
            currentSum += pages;
        }
    }

    return true;
}

int allocateBooks(vector<int> &books, int students) {
    if (students > books.size()) return -1;

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int result = INT_MAX;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(books, students, mid)) {
            result = mid;
            high = mid - 1; // try for a better (smaller) answer
        } else {
            low = mid + 1; // increase pages limit
        }
    }

    return result;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int students = 2;

    int result = allocateBooks(books, students);
    if (result == -1)
        cout << "Allocation not possible\n";
    else
        cout << "Minimum max pages: " << result << endl;

    return 0;
}
