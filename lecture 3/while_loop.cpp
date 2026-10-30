#include <iostream>
using namespace std;
int main () {
    int n, count = 1;
    cout << "Enter your Number" << endl;
    cin >> n;

    while (count <= n) {
        cout << count << endl;
        count++;
    }
    return 0;
}