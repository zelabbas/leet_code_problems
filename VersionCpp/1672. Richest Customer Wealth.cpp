// 1672. Richest Customer Wealth
class Solution {
public:

    int sumSubArr(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        return (sum);
    }

    int maximumWealth(vector<vector<int>>& accounts) {
        int max = sumSubArr(accounts[0]);

        for (int i = 1; i < accounts.size(); i++) {
            int sum = sumSubArr(accounts[i]);
            if (max < sum)
                max = sum;
        }

        return max;
    }
};