// galat ker diya ye isme bus continous ka sum dheka per koi bhi do pair ka sum dhekna tha

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
   int n = nums.size();
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum += nums[i];
        sum += nums[i+1];

        if(sum==target){
            ans.push_back(i);
            ans.push_back(i+1);
            return ans;
        } else {
            sum = 0;
        }
    }
    return ans;
}


int main() {
    vector<int> nums= {2, 7, 11 , 15};
    int target = 9;

    vector<int> ans = pairSum(nums,target);

    cout << ans[0] << ", " << ans[1] << endl;

    return 0;
}