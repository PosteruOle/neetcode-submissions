class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int total_sum=0;
        
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }

        return n*(n+1)/2-total_sum;
    }
};
