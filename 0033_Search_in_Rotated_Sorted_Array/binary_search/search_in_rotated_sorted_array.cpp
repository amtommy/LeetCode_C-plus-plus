class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right = nums.size()-1;
        int left = 0;
        if (nums.size() == 1){
            if(nums[0] == target) return 0;
            else return -1;
        }
        while(right >= left){ // T: O(logN)
            int mid = (right+left)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] >= nums[left]){
                if(target > nums[mid] || target < nums[left]) left = mid + 1;
                else right = mid - 1;
            }
            else{
                if(target < nums[mid] || target > nums[right]) right = mid - 1;
                else left = mid + 1;             
            }
        }
        return -1;
    }
};