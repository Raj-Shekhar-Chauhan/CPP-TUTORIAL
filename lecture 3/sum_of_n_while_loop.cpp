#include <iostream>
using namespace std;
int main() {
    int n,i = 1,sum = 0;
    cout << "enter number " << endl;
    cin >> n;

    while (i<=n) {
        sum = sum + i;
        i++;
        
    }
    cout << "The sum from 1 to "<<n<< "is "  << sum << endl;
    return 0;
}