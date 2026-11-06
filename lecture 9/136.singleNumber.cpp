
class solution{
    public:
    #include <vector>
    int singleNumber(vector<int>&nums) {
       int ans = 0;
        for(int val :nums) {
            ans = ans^val;
        }
        return ans;
    }
};