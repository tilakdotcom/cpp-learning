#include <iostream>
using namespace std;

int squareRoot(int N) {
    if (N == 0 || N == 1) return N; // Edge cases

    int left = 1, right = N, ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;
        
        if (square == N) 
            return mid; // Perfect square case
        else if (square < N) {
            ans = mid; // Store the floor value
            left = mid + 1;
        } 
        else 
            right = mid - 1;
    }
    
    return ans; // Return the largest integer whose square is ≤ N
}

int main() {
    int N = 17;
    cout << "Square root of " << N << " is: " << squareRoot(N) << endl;
    return 0;
}