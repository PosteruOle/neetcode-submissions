class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> minCost(n+1);
        
        if(n<=2){
            return 0;
        }
        
        minCost[0]=0;
        minCost[1]=0;
        minCost[2]=min(cost[0], cost[1]);

        for(int i=3;i<=n;i++){
            minCost[i]=min(minCost[i-1]+cost[i-1], minCost[i-2]+cost[i-2]);
        }

        return minCost[n];    
    }
};
