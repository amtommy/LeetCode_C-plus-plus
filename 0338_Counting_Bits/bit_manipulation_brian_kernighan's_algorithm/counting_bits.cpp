class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);
        for (int i = 0; i <= n; i++){ // T:O(N)
            int num = i;
            while(num != 0){  // T:O(logN)
                num &= num-1;
                result[i] +=1;
            }
        }
        return result;
    }
};