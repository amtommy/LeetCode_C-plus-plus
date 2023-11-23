class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        for(int i = 0; i < nums.size(); i++){ // T:O(N)
            result ^= i ^ nums[i]; 
        }
        return result;
    }
};