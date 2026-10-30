// Write a program to find the even sum form 1 to N
#include <iostream>
using namespace std;

int evenSum (int num) {
    int sum = 0;
    for(int i=0; i<=num; i++){
        if(i%2==0){
            sum = sum + i;
            
        }
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter Number" << endl;
    cin >> num;

    int sum = evenSum(num);
    cout <<"Even sum form 1 to "<< num << " is = " << sum << endl;    
    return 0;
}