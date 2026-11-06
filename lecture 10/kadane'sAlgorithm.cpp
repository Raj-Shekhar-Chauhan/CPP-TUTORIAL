#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int sz = 7;

    int currSum = 0;
    int maxSum = INT_MIN;
    for( int st=0; st<sz; st++){
        currSum += arr[st];
        maxSum = max(currSum , maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout << "max sum of sub array = " << maxSum << endl;
    return 0;
}