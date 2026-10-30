// Write a program to convert Small letters to Capital letter
#include <iostream>
using namespace std;

char smallToCapital(char ch) {
if (ch >= 'a' && ch <= 'z' ) {
    ch = ch - 32;
    return ch;
} else {
    cout << "Invalid input" << endl;
    return ch;
}
}

int main() {
    char ch;
    cout << "Enter Value" << endl;
    cin >> ch;

    char result = smallToCapital(ch);
    cout << result << endl;
    return 0;
}