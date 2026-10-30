#include <iostream>
using namespace std;

void primeN(int n) {
    
    for (int i=2;i*i<=n; i++) {
        if (n%i == 0) {
            
            break;
        }
    }
    
}

int main () {
    int n;
    
    cout << "Enter Number" << endl;
    cin >> n;

    primeN(n);
    bool isprime = true;
    if (isprime == true) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
    
        


    return 0;
}