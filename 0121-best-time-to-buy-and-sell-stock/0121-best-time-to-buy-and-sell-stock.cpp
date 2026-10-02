class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int buy=prices[0];
        for (int i=0;i<prices.size();i++){
            maxp=max(maxp,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        
        return maxp;
    }
};