class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int result=INT_MIN;
        int current_sum;

        for(int i=0;i<n;i++){
            current_sum=0;

            for(int j=i;j<n;j++){
                current_sum+=nums[j];
                result=max(result, current_sum);
            }
        }

        return result;
    }
};
