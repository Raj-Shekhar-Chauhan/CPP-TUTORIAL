#include <iostream>
using namespace std;

int main() {

    cout << (3<5) << endl; // true-> 1
    cout << (3==3) << endl; // true-> 1
    cout << (3<=3) << endl; // true-> 1
    cout << (3>5) << endl; // false-> 0
    cout << (3>=5) << endl; // false-> 0
    cout << (3!=5) << endl; // true-> 1
    cout << !(3!=5) << endl; // logical not
    cout << ((3<5) || (3<1)) << endl; // logical OR
    cout << ((3<5) && (3<1)) << endl; // logical And

    return 0;
}