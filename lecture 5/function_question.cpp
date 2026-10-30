#include <iostream>
using namespace std;

// sum of numbers from 1 to N
int sumN (int n) {
    int sum = 0;

    for (int i=1;i<=n;i++) {
        sum += i;
    }

    return sum;
}

// N factorial
int factorialN(int n) {
    int fact=1;

    for (int i=1;i<=n;i++) {
        fact *= i;
    }
    return fact;
}

//Sum of digits of a number
int sumOfDigits (int num) {
    int digSum = 0;

    while (num > 0) {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }

    return digSum;
}

int main () {
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;
    cout << factorialN(4) << endl;
    cout << "sum = " << sumOfDigits (2356) << endl;
    
    return 0;
}


