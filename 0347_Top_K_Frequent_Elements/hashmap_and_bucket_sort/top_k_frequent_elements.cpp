#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> bucket_array(nums.size()+1, vector<int>());
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){ // T:O(N)
            map[nums[i]]++;
        }
        for(auto &element:map){ // T:O(N)
            bucket_array[element.second].push_back(element.first);
        }
        for(int i = nums.size(); i >= 0; i--){ // T:O(N)
          for(auto &element:bucket_array[i]){ // T:O(M)
              if(k>0){
                  ans.push_back(element);
                  k--;
              }
          }
        }
        return ans;
    }
};