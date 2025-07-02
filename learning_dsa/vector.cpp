#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;

int main() {
    // Declare a vector
    vector<int> v;

    // Insert elements using push_back()
    v.push_back(10);
    v.push_back(5);
    v.push_back(30);
    v.push_back(20);

    cout << "Original vector: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove last element
    v.pop_back();

    cout << "After pop_back(): ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Access an element safely
    cout << "Element at index 1: " << v.at(1) << endl;

    // Clear the vector
    v.clear();
    cout << "Vector size after clear: " << v.size() << endl;

    return 0;
}
