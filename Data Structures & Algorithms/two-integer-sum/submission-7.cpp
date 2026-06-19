#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n=nums.size();
        vector<int> result;
        unordered_map<int, int> map;

        for(int i=0;i<n;i++){
            if(map.find(target-nums[i])!=map.end()){
                result.push_back(map[target-nums[i]]);
                result.push_back(i);
                break;
            } else {
                map[nums[i]]=i;
            }
        }

        return result;
    }
    /*
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> result;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }

        return result;
    }
    */

};
