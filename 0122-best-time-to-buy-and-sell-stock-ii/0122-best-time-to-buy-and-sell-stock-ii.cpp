class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int n = prices.size();
        int profit = 0, ans = 0;
        int i=0;
        while(i < n){
            if(prices[i] < min){ 
                min = prices[i];
            }
            else if(prices[i]-min > profit){
                profit  = prices[i]-min;
                ans += profit;
                min = prices[i];
                profit = 0;
            }
            i++;
            
        } 
        return ans;
    }
};