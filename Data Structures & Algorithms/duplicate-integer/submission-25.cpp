#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>


class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int n=nums.size();

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