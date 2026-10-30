// #include <iostream>
// using namespace std;

// int main () {
//     int marks [5] = {99, 100, 54, 36, 88};
//     int size = 5; // mostly size of array is given or we know already 
//     // if the size is not given do this to find the size of array

//     //cout << sizeof(marks) / sizeof(int) << endl;

//     //loops: 0 to size-1
//     for(int i=0; i<size; i++) {
//         cout << marks[i] << endl;       // isme bus out put me use kiya loop hum input me bhi use ker sakte h value lene k liye 
//     }

//     return 0;
// }
    
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    for(int i=0; i<size; i++) {
        cin >> marks[i];        // ye input k liye h loop
    }

    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}