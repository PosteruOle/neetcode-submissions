class Solution {
public:
    int traversal(vector<int>& nums, int target, int left, int right){
        if(left>right){
            return -1;
        }

        int medium=left+(right-left)/2;

        if(nums[medium]==target){
            return medium;
        } else if(nums[medium]<target){
            return traversal(nums, target, medium+1, right);
        } else {
            return traversal(nums, target, left, medium-1);
        }
    }

    int search(vector<int>& nums, int target) {
        int n=nums.size();

        return traversal(nums, target, 0, n-1);    
    }
};
