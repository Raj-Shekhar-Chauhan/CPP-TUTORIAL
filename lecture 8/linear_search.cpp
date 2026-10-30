#include <iostream>
using namespace std;

int search(int arr[], int sz, int target) {
    for(int i=0; i<sz ; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    int arr[] = {2, 45, 3, 5, 9};
    int sz = 5;
    int target = 5;

    cout << search(arr,sz,target) << endl;
    return 0;
}