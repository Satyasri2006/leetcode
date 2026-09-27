class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), max, profit=0, min=prices[0];
        for(int i=0; i<n-1; i++){
            if(prices[i]>min||prices[i]>=prices[i+1])continue;
            else{
                min=prices[i];
                max=prices[i];
                for(int j=i+1; j<n; j++){
                    if(max<prices[j]){
                        max=prices[j];
                    }
                }
                if(profit<(max-prices[i]))profit=max-prices[i];
            }
        }
        return profit;
    }
};