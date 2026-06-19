class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();

        int next=1;
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                continue;
            }

            if(nums[i]==next){
                next++;
            } else if (nums[i]>next){
                break;
            }
        }

        return next;
    }
};