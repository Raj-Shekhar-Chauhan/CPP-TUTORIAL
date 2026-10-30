#include <iostream>
using namespace std;
int main() {
    int i,sum = 0,n;
    cout << "Enter number" << endl;
    cin >> n;

    for (i=1;i<=n;i++) {
        if(i%3 == 0) {
            sum+=i;
        }
    }
    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is " << sum << endl;
    return 0;
}