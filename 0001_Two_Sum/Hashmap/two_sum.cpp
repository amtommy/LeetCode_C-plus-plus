#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;  // S: O(N)
        map.insert(pair<int, int>(nums[0], 0));
        for(int i = 1; i < nums.size(); i++){ //T: O(N)
          auto iter = map.find(target - nums[i]);
          if(iter != map.end()){
            return {iter->second, i};
          }
          map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};