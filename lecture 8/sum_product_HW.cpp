#include <iostream>
using namespace std;


int sumArray(int arr[], int sz) {
    int sum = 0;
    for (int i=0; i<sz; i++){
    sum = sum + arr[i];
    }
    return sum;
}

int productArray(int arr[], int sz) {
    int product = 1;
    for (int i=0; i<sz; i++){
    product = product*arr[i];
    }
    return product;
}

int main () {
    int arr[] = {2,5};
    int sz = 2;
    cout << sumArray(arr,sz) << endl;
    cout << productArray (arr,sz) << endl;
    return 0;
}