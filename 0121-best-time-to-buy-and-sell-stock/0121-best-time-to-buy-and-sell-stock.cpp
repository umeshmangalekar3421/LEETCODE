class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0,bb=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>bb){
                max_profit=max(max_profit,prices[i]-bb);
                
            }
            bb=min(bb,prices[i]);
        }
        return max_profit;
    }
};