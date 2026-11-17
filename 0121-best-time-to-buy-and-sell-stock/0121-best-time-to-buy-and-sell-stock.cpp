class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mbuy=0;
        int mprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<prices[mbuy]){
                mbuy=i;
            }
            mprofit=max(prices[i]-prices[mbuy],mprofit);
        }
        return mprofit;
    }
};