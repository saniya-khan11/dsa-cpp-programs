/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int buyPrice =0;
        bool isBuy = 0;
        bool founding =1;
        int profit;
        for(int i=0;i<prices.size()-1;i++){
            if(founding){
            if(prices[i]<prices[i+1]){
            buyPrice=prices[i];
            isBuy=1;
            founding =0;
            }
            }
            if(isBuy){
                profit = prices[i+1] - buyPrice;
                if(profit<0)    buyPrice= prices[i+1];
                if(profit>maxProfit)    maxProfit =profit;
            }
        }
        return maxProfit;
    }
};
*/
//optimized and correct approach:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};
