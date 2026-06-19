class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int result=0;
        int left=0;
        int right=1;

        while(right<n){
            if(prices[left]<prices[right]){
                result=max(result, prices[right]-prices[left]);
            } else {
                left=right;
            }

            right++;
        }

        return result;    
    }
};
