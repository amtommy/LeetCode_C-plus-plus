class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int right = nums.size() - 1;
        int left = 0;
        int mid;
        while(right >= left){ // T:O(logn)
            mid = (right + left)/2;
            if(mid > 0 && nums[mid-1] > nums[mid]){
                return nums[mid];
            }
            if(mid < nums.size() - 1 && nums[mid+1] < nums[mid]){
                return nums[mid+1];
            } 
            if(nums[mid] >= nums[left]) left = mid + 1;
            else right = mid -1;
        }
        if(left >= nums.size()) left = 0;
        return nums[left];
    }
};