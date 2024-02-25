class Solution {
public:
    int longestPalindrome(string s) {
        int odd_count = 0;
        unordered_map<char, int> mp;
        for(auto ch : s){ // T: O(N)
            mp[ch]++;
            if(mp[ch]%2 == 1) odd_count++;
            else odd_count--;
        }
        if(odd_count > 1) return s.size() - odd_count + 1;
        return s.size();
    }
};