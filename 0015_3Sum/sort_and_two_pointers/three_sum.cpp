#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int vector_size = nums.size();
        vector<vector<int>> output; // S: O(N)
        set<vector<int>> vector_set; // S: O(N)
        sort(nums.begin(), nums.end()); // T: O(NlogN)
        for(int i = 1; i < vector_size-1; i++){ // T: O(N)
            int left_pointer = 0;
            int right_pointer = vector_size - 1;
            while(left_pointer < i && i < right_pointer){ // T: O(N)
                int sum = nums[left_pointer] + nums[i] + nums[right_pointer];
                if( sum == 0){
                    vector_set.insert({nums[left_pointer], nums[i], nums[right_pointer]});
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
        for(auto element: vector_set){ // T: O(N)
            output.push_back(element);
        }
        return output;
    }
};