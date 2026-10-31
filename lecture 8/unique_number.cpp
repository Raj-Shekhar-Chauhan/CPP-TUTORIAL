// WAF to print all the unique values in an array.
#include <iostream>
using namespace std;

void uniqueNumber(int arr[], int sz) {
   
    for(int i=(sz-1); i>=0; i--){
         int test=0;
        for(int j=0; j<(sz-1); j++ ) {
            if(i=!j){
                if(arr[j]==arr[i]){
                    test++;
                   
                }
            }
            
        }
                if (test < 1) {
                cout << arr[i] << " ";
                 test = 0;
                    } 
                   
    }

   
}

int main() {
    int arr[] = {1,2,3,2,5,5};
    int sz = 6;
    uniqueNumber(arr,sz);
    return 0;
}