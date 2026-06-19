class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int s;

        while(l<=r){
            s=l+(r-l)/2;

            if(nums[s]==target){
                return s;
            } else if(nums[s]<target){
                l=s+1;
            } else {
                r=s-1;
            }
        }
        
        return -1; 
    }
};
