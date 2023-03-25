#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map; // T: O(n), S: O(n)
        for(auto &num:nums){ // T: O(n)
            map[num]++; // T: (1)
        }
        for(auto &element:map){ // T: O(n)
            if(element.second >= 2){ // T: O(1)
                return true;
            }
        }
        return false;
    }
};