#include <iostream>
using namespace std;

// Practice Question 1.
int main() {
    char ch;

    cout << "Enter a char: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "Lowercase\n";
    } else {
        cout << "Uppercase\n";
    }

    return 0;
}
