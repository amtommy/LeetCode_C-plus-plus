#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        for(int i = 1; i< nums.size(); i++) // T: O(N)
        {
            ans[i] = ans[i-1]*nums[i-1];
        }
        int n = nums.size();
        int upper = 1;
        for(int i = 0; i< nums.size(); i++) // T: O(N)
        {
            ans[n-1-i] *= upper;
            upper *= nums[n-1-i];
        }
        return ans;
    }
};