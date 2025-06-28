#include <iostream>
#include <vector>
#include <numeric>     // For accumulate()
#include <algorithm>   // For max_element()

using namespace std;

// 📘 Helper function to check if it's possible to allocate books such that
// no student gets more than 'maxPages'
bool isPossible(vector<int> &books, int students, int maxPages) {
    int studentCount = 1;  // Start with the first student
    int pageSum = 0;       // Pages allocated to the current student

    for (int pages : books) {
        // If any single book has more pages than maxPages, it's impossible
        if (pages > maxPages)
            return false;

        // If adding this book exceeds the current allowed limit
        if (pageSum + pages > maxPages) {
            studentCount++;     // Allocate to next student
            pageSum = pages;    // Start counting pages for the next student

            // If students required exceeds given 'students', return false
            if (studentCount > students)
                return false;
        } else {
            pageSum += pages;   // Else, keep adding pages to current student
        }
    }

    return true;  // Allocation is possible within maxPages
}

// 🎯 Main function to find the minimum possible value of the maximum pages
int bookAllocation(vector<int> &books, int students) {
    // Not enough books to allocate one to each student
    if (books.size() < students)
        return -1;

    // Lower bound = max book pages (at least one book must be assigned)
    int low = *max_element(books.begin(), books.end());

    // Upper bound = sum of all book pages (one student gets all)
    int high = accumulate(books.begin(), books.end(), 0);

    int result = high;  // Initialize answer with the highest possible value

    // Apply Binary Search on the range [low, high]
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevent overflow

        // Check if this mid value can be the solution
        if (isPossible(books, students, mid)) {
            result = mid;       // Update answer with smaller possible value
            high = mid - 1;     // Try to find a better (smaller) solution
        } else {
            low = mid + 1;      // Increase pages, as mid was too small
        }
    }

    return result;
}

int main() {
    vector<int> books = {10, 20, 30, 40};  // Number of pages in each book
    int students = 2;                      // Total students

    int answer = bookAllocation(books, students);
    cout << "Minimum of maximum pages allocated to any student = " << answer << endl;

    return 0;
}
