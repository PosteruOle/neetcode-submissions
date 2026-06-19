class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        if(n==0){
            return 0;
        }

        if(n==1){
            return nums[0];
        }

        vector<int> steal(n);
        steal[0]=nums[0];
        steal[1]=max(nums[0], nums[1]);
        int result=max(steal[0], steal[1]);

        for(int i=2;i<n;i++){
            steal[i]=max(steal[i-2]+nums[i], steal[i-1]);
            result=max(result, steal[i]);
        }
        
        return result;    
    }
};
