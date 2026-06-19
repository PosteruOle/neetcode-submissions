#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> result;
    //     unordered_map<int, int> map;
    //     int n=nums.size();

    //     for(int i=0;i<n;i++){
    //         map.insert({nums[i], i});

    //         if(map.find(target-nums[i])!=map.end() && i!=map[target-nums[i]]){
    //             result.push_back(map[target-nums[i]]);
    //             result.push_back(i);
    //             break;
    //         }
    //     }

    //     return result;
    // }

    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> result;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }
};
