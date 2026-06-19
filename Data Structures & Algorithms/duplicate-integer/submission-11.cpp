#include <set>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(set.find(nums[i])!=set.end()){
                return true;
            } else {
                set.insert(nums[i]);
            }
        }

        return false;
    }
};