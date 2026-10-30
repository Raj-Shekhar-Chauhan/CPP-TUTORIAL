#include <iostream>
#include <climits>
using namespace std;
int main() {
    int size = 5;
    int marks[size] = {24, 22, -45, 11, 8};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int i,j;

    for ( i=0; i<size-1; i++) {
        smallest = min(marks[i],smallest);
    }
    cout << i << endl;
    return 0;
}