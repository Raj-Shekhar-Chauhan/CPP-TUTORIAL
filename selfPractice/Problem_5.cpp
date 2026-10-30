#include <iostream>
using namespace std;

int uniqueNum(int arr[], int sz){
    int start = 0, end = 0;

    for(int i=0; i<sz; i++) {
        for(int j=0; j<sz; j++) {
            if (i!=j) {
               bool is(arr[i]!=arr[j]) = true;
            
                }

            }
        }
    }


int main() {
    int arr[] = {2,4,6,3,2,1,5,5,1};
    int sz = sizeof(arr)/4;

    uniqueNum(arr,sz);
    return 0;
}