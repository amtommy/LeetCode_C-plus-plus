class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (nums.size()+1)*nums.size()/2;
        int result = sum;
        for(int i = 0; i < nums.size(); i++){; // T:O(N)
            result -= nums[i]; 
        }
        return result;
    }
};