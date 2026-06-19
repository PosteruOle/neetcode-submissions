class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();

        if(nums[0]>target){
            return 0;
        }

        if(nums[n-1]<target){
            return n;
        }

        for(int i=0;i<n-1;i++){
            if(nums[i]==target){
                return i;
            }
            
            if(nums[i]<target && nums[i+1]>target){
                return i+1;
            }
        }
    }
};