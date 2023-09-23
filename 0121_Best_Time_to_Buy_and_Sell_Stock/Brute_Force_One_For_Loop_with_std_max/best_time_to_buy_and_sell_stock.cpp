class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for(size_t i = 0; i < prices.size()-1; i++){ // T: O(N)
            int max_value = *max_element(prices.begin() + i + 1 , prices.end()); // T: O(N)
            if(max_value > prices[i])
            {
                int profit = max_value - prices[i];
                if (profit > max_profit){
                    max_profit = profit;
                }
            }
        }
        return max_profit;
    }
};