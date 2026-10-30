// this is for number pattern

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
    
//     for (int i=1; i<=n; i++) {
//         for (int j=1;j<=n;j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// for stars pattern
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
    
//     for (int i=1; i<=n; i++) {
//         for (int j=1;j<=n;j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// for alphabet pattern
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
    
//     for (int i=0; i<n; i++) {
//         char ch = 'A';
//         for (int j=1;j<=n;j++) {
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// for continous number pattern
#include <iostream>
using namespace std;
int main ()
{
    int n,i,j;
    int num = 1;
    cout << "Enter number" << endl;
    cin >> n;

    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout << "after pattern : " << num << endl;


    return 0;
}