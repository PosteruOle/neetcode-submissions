class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        int minBuy=prices[0];

        for(int price: prices){
            result=max(result, price-minBuy);
            minBuy=min(minBuy, price);
        }

        return result;    
    }
};
