class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l=0,r=1;
        while(r<prices.size()) {
            if(prices[r]>prices[l]) {
                profit=prices[r]-prices[l]>profit?prices[r]-prices[l]:profit;
            } else {
                l=r;
            }
            r++;
        }
        return profit;
    }
};