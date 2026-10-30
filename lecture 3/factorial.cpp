#include <iostream>
using namespace std;
int main() {
    long int n,i,product = 1;

    cout << "Enter number" << endl;
    cin >> n;

    for (i=1;i<=n;i++) {
        product*=i;
    }
    cout << "The factorial of " << n << " is " << product << endl;
    return 0;
}