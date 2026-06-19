class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());

        return set.size()!=nums.size();
    }
};