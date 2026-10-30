#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 1;
    cout << "ENTER NUMBER" << endl;
    cin >> n;

    do {
        cout << i << " ";
        i++;
    } while (i<=n);
    
    cout << endl;

    return 0;
}