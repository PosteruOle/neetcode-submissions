#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(set.find(nums[i])!=set.end()){
                return true;
            }

            set.insert(nums[i]);
        }

        return false;
    }
};