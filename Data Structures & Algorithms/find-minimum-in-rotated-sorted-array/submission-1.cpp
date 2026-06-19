class Solution {
public:
    int findMin(vector<int> &nums) {
        int result=INT_MAX;

        for(int num: nums){
            result=min(result, num);
        }

        return result;
    }
};
