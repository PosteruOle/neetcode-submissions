#include <set>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> set;
        int n=nums.size();

        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }

        return set.size() != n;
    }
};