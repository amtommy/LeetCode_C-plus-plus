#include <unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        unordered_set<char> hashset; //S: O(N), T: O(N)
        int left = 0;
        for(int right = 0; right < s.size(); right++ ){ // T: O(N)
            while(hashset.count(s[right])){
                hashset.erase(s[left]);
                left++;
            }
            hashset.insert(s[right]);
            if(hashset.size() > max_length){
                max_length = hashset.size();
            }
        }
        return max_length;
    }
};