#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i< nums.size(); i++){ // T: O(n)
            if(find(nums.begin()+i+1, nums.end(), nums[i]) != nums.end()){ // T: O(n)
                return true;
            }
        }
        return false;
    }
};