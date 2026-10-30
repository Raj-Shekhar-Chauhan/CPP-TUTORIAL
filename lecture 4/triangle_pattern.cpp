//j for stars pattern
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=0; j< i+1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// for number
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<i+1;j++) {
//             cout << (i+1);
//         }
//         cout << endl;
//     }
// }

// for alphabets
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     char ch = 'A';
//     cout << "Enter Number" << endl;
//     cin >> n;

//     for (int i=0;i<n;i++){
//         for (int j=0;j<i+1;j++) {
//             cout << ch ;
            
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
//     return 0;
// }

// for number continous 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=1;j<=i+1;j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// reverse number pattern
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter Number" << endl;
//     cin >> n;

//     for (int i=0;i<n;i++) {
//         for (int j=i+1; j>0;j--) {
//             cout << j;
//         }
//         cout << endl;
//     }
// }


// Floyd's triangle pattern backword
// #include <iostream> 
// using namespace std;
// int main () {
//     int n;
//     int num = 1;
//     cout << "Enter Number" << endl;
//     cin >> n;

//     for (int i = 0;i<n;i++) {
//         for (int j=i+1;j>0;j--) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Floyd's triangle pattern
#include <iostream> 
using namespace std;
int main () {
    int n;
    int num = 1;
    cout << "Enter Number" << endl;
    cin >> n;

    for (int i = 0;i<n;i++) {
        for (int j=0;j<i+1;j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}

