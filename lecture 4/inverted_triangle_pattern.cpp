// for numbers
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;

//     for (int i=0; i<n; i++) {
//         for (int j=0;j<i; j++) {
//             cout << " "; }

//             for (int k=0; k<n-i; k++) {
//                 cout << (i+1);
//             }
//             cout << endl;
            
//         }
//        return 0;
//     }
    
#include <iostream>
using namespace std;
int main() {
    int n;
    char ch='A';
    cout << "Enter Number" << endl;
    cin >> n;

    for (int i=0;i<n;i++) {
        for (int j=0;j<i; j++) {
            cout << " ";
        }
          ch = 'A' +i;
        for (int k=0; k<(n-i); k++) {
            cout << ch;
            
            
        }
        cout << endl;
    }
    return 0;
}
