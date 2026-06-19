#include <unordered_map>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int max_occurence=0;
        int max_element;
        int n=nums.size();

        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        for(auto it: map){
            if(it.second>max_occurence){
                max_occurence=it.second;
                max_element=it.first;
            }
        }

        return max_element;
    }
};