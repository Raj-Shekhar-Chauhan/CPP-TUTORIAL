// #include <iostream>
// using namespace std;
// int main () {
//     char ch;
//     cout << "ENTER CHARACTER " << endl;
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z' ) {
//         cout << "Lowercase" << endl;
//     }  else {
//         cout << "Uppercase" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main () {
    char ch;
    cout << "ENTER CHARACTER " << endl;
    cin >> ch;
    if (ch >= '65' && ch <= '90' ) {
        cout << "Lowercase" << endl;
    }  else {
        cout << "Uppercase" << endl;
    }
    return 0;
}