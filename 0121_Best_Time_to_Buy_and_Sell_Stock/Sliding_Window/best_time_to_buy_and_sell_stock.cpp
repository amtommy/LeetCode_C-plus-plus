class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = prices[0]; // S: O(1)
        int max_profit = 0;
        for(size_t i = 1; i < prices.size(); i++){ // T:O(N)
            max_profit = max(max_profit, prices[i] - min_value);
            min_value = min(min_value, prices[i]);
        }
        return max_profit;
    }
};