#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> tmp_stack;
        for(char current_char: s){
            if (current_char == '(' || 
                current_char == '[' ||
                current_char == '{'){
                tmp_stack.push(current_char);
            }
            else{
                if(tmp_stack.empty() ||
                    (current_char == ')' && tmp_stack.top() != '(') ||
                    (current_char == ']' && tmp_stack.top() != '[') ||
                    (current_char == '}' && tmp_stack.top() != '{') ){
                    return false;
                }
                else{
                    tmp_stack.pop();
                }
            }
        }
        return tmp_stack.empty();
    }
};