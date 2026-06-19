#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, bool> map;
        
        for(int i=0;i<n;i++){
            if(map.find(nums[i])==map.end()){
                map[nums[i]]=true;
            } else {
                return true;
            }
        }

        return false;
    }
};
