class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n != 0){ // T:O(1)
            n &= n-1;
            result++;
        }
        return result;
    }
};