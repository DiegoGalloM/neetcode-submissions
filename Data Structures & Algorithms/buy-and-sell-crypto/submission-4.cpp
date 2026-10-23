class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = l + 1;
        int diff = 0;
        while (r < prices.size()){
            if(prices[r] < prices[l]){
                l = r;
            }
            else{
                diff = max(diff, prices[r] - prices[l]);
            }
            r++;
        }
        return diff;
    }
};
