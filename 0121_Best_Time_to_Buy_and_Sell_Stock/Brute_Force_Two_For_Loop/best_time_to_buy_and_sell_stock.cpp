class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for(int i = 0; i < prices.size()-1; i++){ // T: O(N)
            for(int j = i+1; j < prices.size(); j++){ // T: O(N)
                if(prices[j] > prices[i])
                {
                    int profit = prices[j] - prices[i];
                    if (profit > max_profit){
                        max_profit = profit;
                    }
                }
            }
        }
        return max_profit;
    }
};