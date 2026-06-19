#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, vector<int>> map;
        vector<int> result;

        for(int i=0;i<n;i++){
            map[nums[i]].push_back(i);
        }
        
        for(int i=0;i<n;i++){
            if(map.find(target-nums[i])!=map.end()){
                if(nums[i]==target-nums[i]){
                    if(map[nums[i]].size()==1){
                        continue;
                    } else {
                        result.push_back(map[nums[i]][0]);
                        result.push_back(map[nums[i]][1]);
                        break;
                    }
                }
                result.push_back(map[nums[i]].back());
                map[nums[i]].pop_back();
                result.push_back(map[target-nums[i]].back());
                break;
            }
        }

        sort(result.begin(), result.end());

        return result;
    }
};
