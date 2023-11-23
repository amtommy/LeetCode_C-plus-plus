class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] == 0) return 1;
            else if (nums[0] == 1)  return 0;
        }
        sort(nums.begin(), nums.end()); // T:O(NlogN)
        for(int i = 1; i < nums.size(); i++){ // T:O(N)
            if(nums[0] != 0) return 0;
            if((nums[i] - nums[i-1] != 1)) return nums[i]-1;
        }
        return nums[nums.size()-1]+1;
    }
};