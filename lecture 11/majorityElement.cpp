//Time complexity O(n^2)
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums){
    int n = nums.size();
    int i = 0, j=0;
    for(nums[i]; i<n; i++) {
        int freq = 0;
        for(nums[j]; j<n; j++){
            if(nums[i]==nums[j]){
                freq++;
            }
        }
        if(freq > n/2){
            return nums[i];
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1,1,2,2,1};
    int ans = majorityElement(nums);

    cout << "Majority Element is = " << ans << endl;

    return 0;
}