#include <iostream>
using namespace std;
int main() {
    int count = 1,n,reverseInteger,num;
    cout << "ENTER INTEGER" << endl;
    cin >> n;

    while(n>0) {
        n = n/10;
        count = count + 1;
    }

    for(int i=0; i<n; i++) {
        num = n%10;
        n = n/10;
        reverseInteger = num + 
    }
    return 0;
}