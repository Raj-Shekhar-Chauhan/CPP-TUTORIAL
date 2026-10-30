#include <iostream>
using namespace std;
int main () {
    char ch;
    cout << "ENTER CHARACTER " << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z' ) {
        cout << "Lowercase" << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Enter valid inpur" << endl;
    }
    return 0;
}