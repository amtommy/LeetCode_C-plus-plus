class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<string, int> map; // S: O(N)
        int left = 0;
        int max_char_count = 0;
        int longest_number = 0;
        for(int right = 0; right < s.size(); right++){ // T: O(N)
            string right_char = to_string(s[right]);
            map[right_char]++;
            if(max_char_count < map[right_char]){
                max_char_count = map[right_char];
            }
            while((right - left + 1 - max_char_count) > k)
            {
                string left_char = to_string(s[left]);
                map[left_char]--;
                left++;
            }
            longest_number = max(longest_number, right - left + 1);
        }
        return longest_number;
    }
};