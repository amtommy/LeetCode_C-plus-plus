#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end()); //S: O(N), T: O(N)
        int curr = 0; int res = 0;
        for(int i = 0; i < nums.size(); i++){ // T: O(N)
            if(set.find(nums[i]-1) == set.end()){
                curr++;
                while(set.find(nums[i] + curr) != set.end()){
                    curr++;
                }
            }
            res = max(res, curr);
            curr = 0;
        }
        return res;
    }
};