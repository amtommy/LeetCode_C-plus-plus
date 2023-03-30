#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false; 
        }
        vector<int> vec(26); // S: O(N)
        for(int i = 0; i < s.size(); i++){ // T:O(N)
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        for(int i = 0; i < vec.size(); i++){ // T:O(N)
            if(vec[i]!=0){
                return false; 
            }
        }
        return true;
    }
};