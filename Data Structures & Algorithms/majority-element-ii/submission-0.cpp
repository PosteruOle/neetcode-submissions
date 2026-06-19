#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int limit=n/3;

        map<int, int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        for(auto item: map){
            if(item.second>limit){
                result.push_back(item.first);
            }
        }


        return result;    
    }
};