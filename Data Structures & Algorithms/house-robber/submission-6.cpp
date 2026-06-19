class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
    
        if(n==1){
            return nums[0];
        }
        
        if(n==2){
            return max(nums[0], nums[1]);
        }

        vector<int> result(n);
        
        result[0]=nums[0];
        result[1]=max(nums[0], nums[1]);
        result[2]=max(nums[0]+nums[2], nums[1]);
        
        for(int i=3;i<n;i++){
            result[i]=max(result[i-2]+nums[i], result[i-1]);
        }

        return result[n-1];
    }
};
