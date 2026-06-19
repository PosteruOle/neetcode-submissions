class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();

        for(int i=1;i<=2;i++){
            for(int i=0;i<n;i++){
                result.push_back(nums[i]);
            }
        }

        return result;   
    }
};