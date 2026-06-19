class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        
        if(n<=2){
            return 0;
        }
        
        int a=0;
        int b=min(cost[0], cost[1]);
        int c=INT_MAX;

        for(int i=3;i<=n;i++){
            c=min(b+cost[i-1], a+cost[i-2]);
            a=b;
            b=c;
        }

        return c;    
    }
};
