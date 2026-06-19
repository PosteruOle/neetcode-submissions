class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int result=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<result){
                result=nums[i];
            }
        }
        return result;    
    }
};
