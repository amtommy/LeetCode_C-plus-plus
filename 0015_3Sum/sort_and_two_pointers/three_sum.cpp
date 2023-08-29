#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int vector_size = nums.size();
        vector<vector<int>> output;
        sort(nums.begin(), nums.end()); // T: O(nlogn)
        for(int i = 1; i < vector_size-1; i++){  // T: O(n)
            int left_pointer = 0;
            int right_pointer = vector_size - 1;
            while(left_pointer < i && i < right_pointer){ // T: O(m)
                int sum = nums[left_pointer] + nums[i] + nums[right_pointer];
                if( sum == 0){
                    vector<int> set;
                    set.push_back(nums[left_pointer]);
                    set.push_back(nums[i]);
                    set.push_back(nums[right_pointer]);
                    output.push_back(set);
                    left_pointer++;
                    right_pointer--;
                }
                else if (sum > 0){
                    right_pointer--;
                }
                else{
                    left_pointer++;
                }
            }
        }
        return output;
    }
};