// 122. Best Time to Buy and Sell Stock II
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l = 0; 
        int r = 1;
        int save = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                if (r <= prices.size() - 1 || prices[r] > prices[r + 1]) {
                    profit += prices[r] - prices[l];
                    l = r;
                }
            } else {
                l = r;
            }
            r++;
        }
        return profit;
    }
};
