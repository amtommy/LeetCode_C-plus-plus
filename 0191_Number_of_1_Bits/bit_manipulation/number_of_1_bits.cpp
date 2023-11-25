class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        for (int i = 1; i <=32; i++){ // T:O(1)
            if (n & 1) result += 1;
            n >>= 1;
        }
        return result;
    }
};