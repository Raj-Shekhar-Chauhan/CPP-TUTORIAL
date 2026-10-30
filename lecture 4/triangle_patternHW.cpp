//Floyd's triangle pattern
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     char ch = 'A';
//     cout << "Enter NUmber" << endl;
//     cin >> n;

//     for (int i=0;i<n;i++) {
//         for (int j=0;j<i+1;j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// reverse tirange patter for alphabets
#include <iostream>
using namespace std;
int main () {
    int n;
    
    cout << "Enter Number" << endl;
    cin >> n;
    
    for (int i=0;i<n;i++) {
        for (int j=i+1;j > 0; j--) {
            char ch = 'A';
            ch = ch + j-1;
            cout << ch;
            
        }
        cout << endl;
    }
    return 0;
}