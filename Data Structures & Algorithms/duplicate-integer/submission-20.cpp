#include <unordered_set>
#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> set;

        for(int i=0;i<n;i++){
            if(set.count(nums[i])){
                return true;
            }

            set.insert(nums[i]);
        }  

        return false;  
    }
};