#include <iostream>
using namespace std;
int main() {
    int n,m,i,j;
    cout << "Enter how many lines you want" << endl;
    cin >> n;
    cout << "Enter how many stars you want in a line" << endl;
    cin >> m;

    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}