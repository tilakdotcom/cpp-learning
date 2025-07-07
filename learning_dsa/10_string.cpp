#include <iostream>
#include <string>
#include <algorithm> // For reverse
using namespace std;

int main() {
    string s = "hello world";
    cout << "Original: " << s << endl;

    // Length
    cout << "Length: " << s.length() << endl;

    // Access
    cout << "First char: " << s[0] << endl;

    // Concatenation
    string s2 = " C++";
    s += s2;
    cout << "After append: " << s << endl;

    // Substring
    string sub = s.substr(0, 5);
    cout << "Substring (0-5): " << sub << endl;

    // Find
    size_t found = s.find("world");
    if (found != string::npos)
        cout << "\"world\" found at index: " << found << endl;

    // Erase
    s.erase(5, 6); // remove " world"
    cout << "After erase: " << s << endl;

    // Insert
    s.insert(5, " everyone");
    cout << "After insert: " << s << endl;

    // Reverse
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;

    return 0;
}
