// Write a program to find a factorial of a number
#include <iostream>
using namespace std;

long long int factorial(int num) {
    long long int product = 1;
    if(num>=0){
    if(num==0){
        product = 1;
        return product;
    } else {
            for(int i=1; i<=num; i++){
                 product = product*i;
             
            }
            return product;
    }
        } else {
            cout << "Invalid input";
            return -1;
        }
}

int main () {
    int num;
    cout << "Enter Number" << endl;
    cin >> num;
    
    long long int product = factorial(num);
    
    for(int i=num; i>0; i--) {
        if(i>1){
        cout << i << "x";
    } else if (i==1) {
        cout << "1 = " << product << endl;
    }
}
    return 0;
}

// 0 value dene per koi value nhi mil rhi