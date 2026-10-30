#include <iostream>
using namespace std;
int main() {
    int i,n, evenSum = 0;
    cout << "ENTER NUMBER" << endl;
    cin>> n;

    for (i=1;i<=n;i++) {
        if (i%2==0) {
            evenSum += i;
        }
    }
    cout << "Even sum from 1 to " << n << " is " << evenSum << endl;
    return 0;
}