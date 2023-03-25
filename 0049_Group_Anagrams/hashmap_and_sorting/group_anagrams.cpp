#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map; // S:O(N)
        vector<vector<string>> ans;
        for(int i = 0; i < strs.size(); i++){ // T: O(N)
          string str = strs[i];
          sort(str.begin(), str.end()); // T: O(NlogN)
          map[str].push_back(strs[i]);
        }
        for(auto &element:map){ // T: O(N)
          ans.push_back(element.second);
        }
        return ans;
    }
};