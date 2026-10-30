// smallest
// #include <iostream>
// using namespace std;

// int main() {
//     int size = 5;
//     int smallest = INT_FAST16_MAX;
//     int num[] = {12, 34, 52, -24, 45};
    
//     for(int i=0; i<size; i++) {
//         if(num[i] < smallest) {
//             smallest = num[i];
//         }
//     }
//         cout << smallest << endl;
//     return 0;
// }

// smalles method 2
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int smallest = INT_FAST16_MAX;
    int largest = INT_FAST16_MIN;
    int num[] = {12, 34, 52, -24, 45};
    
    for(int i=0; i<size; i++) { // min,max
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
        cout << "smallest = " << smallest << endl;
        cout << "largest = " << largest << endl;
    return 0;
}