// #include <iostream>
// using namespace std;

//     //function definition
//    void printHello() {
//         cout <<"hello" << endl;
//     }
// int main() {

//     //function call / invoke
//     printHello();
//     printHello();
//     printHello();
//     printHello();
    

//     int a = 10;
//     int b= 5;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// // function definition
// int printHello() {
//     cout << "hello" << endl;
//     return 3;
// }

// int main () {
//     // function call / invoke
//     int val = printHello(); // variable ki value val me store hogi
//     // variable ki value ko directly bhi print kerwa sakte h 
//     cout << printHello() << endl; // isse direct print ho jayegi variable ki value without store hue

//     cout << "val = " << val << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// sum of 2 number

// double sum(double a, double b) {
//     double s = a + b;
//     return s;
// }

int sum(int a, int b) {
    int s = a + b;
    return s;
}

// min of 2 nums
int minOfTwo(int a, int b) { // parameters
    if (a>b) { 
        cout << "a is greater than b" << endl;
        return a;
    } else {
        cout << "b is greater than a" << endl; //arguments
        return b;
    }

    
}

int main () {
    cout << sum (10,5) << endl;
    cout << "min = " << minOfTwo (15,4) << endl;

    return 0;
}