class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> result;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(map.count(target-nums[i])){
                result.push_back(map[target-nums[i]]);
                result.push_back(i);
            }

            map[nums[i]]=i;
        }

        return result;
    }
};
