class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int middle;

        while(left<=right){
            middle=left+(right-left)/2;

            if(nums[middle]==target){
                return middle;
            } else if(nums[middle]<target){
                left=middle+1;
            } else {
                right=middle-1;
            }
        }

        return -1;
    }
};
