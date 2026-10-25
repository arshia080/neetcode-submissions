class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_profit = INT_MAX;
        for(int price : prices){
            int profit = price  - min_profit;
            min_profit = min(min_profit, price);
            max_profit = max(max_profit,profit);
        }
        return max_profit;
    }
};
