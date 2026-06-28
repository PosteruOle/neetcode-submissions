class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(set.count(nums[i])){
                return true;
            } else {
                set.insert(nums[i]);
            }
        }

        return false;
    }
};