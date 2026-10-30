// Write a function to swap the min & max value of an array.
#include <iostream>
#include <climits>
using namespace std;

int minValue (int arr[], int sz, int min) {
     min = 0;
    for(int i=0; i<sz; i++) {
        if(arr[min] > arr[i]) {
        min = i;
        }
    }
    return min;
}

int maxValue (int arr[], int sz, int max) {
     max = 0;
    for(int i=0; i<sz; i++) {
        if(arr[max] < arr[i]) {
        max = i;
        }
    }
    return max;
}


int main() {
    int arr[] = {5, 4, 6, 8, 10, 35};
    int sz = 6;
    int max = maxValue(arr,sz,max);
    int min = minValue(arr,sz,min);
    swap(arr[max], arr[min]);

    for(int i=0; i<sz; i++){
    cout << arr[i] << " ";
    }
    return 0;
}