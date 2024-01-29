class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long reverse_num = 0;
        int tmp = x;

        while(tmp != 0) // T: O (N)
        {
            int digit = tmp % 10;
            reverse_num = reverse_num * 10 + digit;
            tmp /= 10; 
        }
        return (reverse_num == x);
    }
};