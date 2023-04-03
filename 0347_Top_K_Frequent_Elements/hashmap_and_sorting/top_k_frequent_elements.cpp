#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<pair<int, int>> vect_sort;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){ // T:O(N)
            map[nums[i]]++;
        }
        for(auto &element:map){ // T:O(N)
            vect_sort.push_back(make_pair(element.second, element.first));
        }
        sort(vect_sort.begin(), vect_sort.end()); // T:O(NlogN)
        for(int i = 0; i < k; i++){ // T:O(N)
            ans.push_back(vect_sort[vect_sort.size()-1-i].second);
        }
        return ans;
    }
};