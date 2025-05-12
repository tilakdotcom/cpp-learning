#include <iostream>
#include <vector>
#include <climits>
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