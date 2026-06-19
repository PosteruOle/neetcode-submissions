#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> set;

        for(int i=0;i<n;i++){
            if(set.find(nums[i])==set.end()){
                set.insert(nums[i]);
            } else {
                return true;
            }
        }

        return false;
    }
};