#include <iostream>
using namespace std;

void palindrome(int arr[] , int sz) {
    int start = 0, end = sz-1;
    int p = 0;
    while (start<end) {
        if (arr[start] == arr[end]) {
            start++;
        end--;
            
        } else if (arr[start] != arr[end]) {
            p++;
            break;
        } 
        
}
    if (p>0) {
        cout << "not a Palindrome" << endl;
    } else {
        cout << "Palindrome" << endl;
    }
}

int main () {
    int arr [] = {4, 0, 4, 9 ,4};
    int sz = 5;

    palindrome(arr,sz);
    return 0;
}