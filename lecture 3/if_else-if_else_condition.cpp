#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks " << endl;
    cin >> marks;
    if (marks >= 90 && marks<=100){
        cout << "A" << endl;
    } else if (marks >= 80 && marks < 90) {
        cout << "B" << endl;
    } else if (marks < 80 && marks >=0 ){
        cout << "C" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}