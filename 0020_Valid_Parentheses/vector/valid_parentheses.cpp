#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        bool result = false;
        for(int i = 0; i < s.size(); i++){
            char current_char = s[i];
            if (!stack.empty()){
                if(current_char == ')'){
                    if(stack.back() == '('){
                        stack.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else if(current_char == ']'){
                    if(stack.back() == '['){
                        stack.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else if(current_char == '}'){
                    if(stack.back() == '{'){
                        stack.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    stack.push_back(current_char);
                }
            }
            else{
                stack.push_back(current_char);
            }
        }
        if (stack.empty()){
            result = true;
        }
        else{
            result = false;
        }
        return result;
    }
};