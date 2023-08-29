#include <vector>
#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int left_pointer = 0;
        int right_pointer = s.size()-1;
        while(left_pointer <= right_pointer){
            if(!isalnum(s[left_pointer])){
                left_pointer++;
                continue;
            }
            if(!isalnum(s[right_pointer])){
                right_pointer--;
                continue;
            }
            if(tolower(s[left_pointer]) == tolower(s[right_pointer])){
                left_pointer++;
                right_pointer--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};