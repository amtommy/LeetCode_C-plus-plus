#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { // S: O(1)
        for (int i = 0; i < nums.size(); i++) {  // T: O(N)
            for (int j = i + 1; j < nums.size(); j++) { // T: O(N)
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};