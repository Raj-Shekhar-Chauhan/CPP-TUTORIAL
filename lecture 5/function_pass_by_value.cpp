// #include <iostream>
// using namespace std;

// int sum (int a, int b) {
//     return a+b;
// }

// int main () {
//     int x = 5,y=4;
//     cout << sum (x,y) << endl;
//     return 0;
// }


/*int main me jo hum values dalte h vo arguments hoti h
aur un arguments ki value copy ho ker function me jati h
isliye function me value change hoti h bus int main() me 
arguments ki value wahi rheti h*/
// #include <iostream>
// using namespace std;

// int sum (int a, int b) {
//     a = a + 10; // 15
//     b = b + 10; // 14
//     return a+b; // 29
// }

// int main () {
//     int a = 5,b=4;
//     cout << sum (a,b) << endl; // ye wala a and b aur upper wala a and b alag alag h 

//     cout << a << endl; // 5
//     cout << b << endl; // 4
//     return 0;
// }

#include <iostream>
using namespace std;

void changeX(int x) {
    x = 2*x;    // int main se x ki value copy ho ker yaha aayegi
    cout << "x = " << x << endl;    // isliye yaha x ki value print 10 hogi
}

int main() {
    int x=5;
    changeX(x);

    cout << "x = " << x << endl;    //yaha x ki value bus int main se he aa rhi jo ki 5 h 
    return 0;
}