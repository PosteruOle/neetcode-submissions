#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        unordered_map<int, vector<int>> map;
        vector<int> result;

        for(int i=0;i<n;i++){
            if(map.find(nums[i])==map.end()){
                map[nums[i]]= vector<int>();
                map[nums[i]].push_back(i);
            } else {
                map[nums[i]].push_back(i);
            }
        }

        sort(nums.begin(), nums.end());
        
        while(left<right){
            if(nums[left]+nums[right]==target){
                result.push_back(map[nums[left]].back());
                map[nums[left]].pop_back();
                result.push_back(map[nums[right]].back());
                break;
            } else if(nums[left]+nums[right]>target){
                right--;
            } else {
                left++;
            }
        } 

        sort(result.begin(), result.end());

        return result;   
    }
};
