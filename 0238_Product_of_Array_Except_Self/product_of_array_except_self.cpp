#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> lower(nums.size(), 1); // S: O(N), T: O(N)
        vector<int> upper(nums.size(), 1); // S: O(N), T: O(N)
        for(int i = 1; i< nums.size(); i++) // T: O(N)
        {
            lower[i] = lower[i-1]*nums[i-1];
        }
        int n = nums.size();
        for(int i = 1; i< nums.size(); i++) // T: O(N)
        {
            upper[n-1-i] = upper[n-i]*nums[n-i];
        }
        for(int i = 0; i< nums.size(); i++) // T: O(N)
        {
            ans[i] = lower[i]*upper[i];
        }       
        return ans;
    }
};