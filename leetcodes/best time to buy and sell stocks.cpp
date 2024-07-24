class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2)
            return 0;
        
        int maxi = 0;
        int mini = INT_MAX;
        
        // Iterate over prices array
        for (int i = 0; i < prices.size(); i++) {  // <-- Use < instead of <=
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }
        
        return maxi;
    }
};
