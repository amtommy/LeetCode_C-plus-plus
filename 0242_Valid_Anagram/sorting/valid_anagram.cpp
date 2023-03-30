#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        {
            return false; 
        }
        sort(s.begin(), s.end(), std::less<char>()); // T:O(NlogN)
        sort(t.begin(), t.end(), std::less<char>()); // T:O(NlogN)
        if(s == t){
            return true;       
        }
        return false;    
    }
};