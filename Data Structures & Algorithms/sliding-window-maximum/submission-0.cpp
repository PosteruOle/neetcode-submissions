class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int n=nums.size();

        for(int i=0;i<=n-k;i++){
            int max=nums[i];
            for(int j=i+1;j<i+k;j++){
                if(nums[j]>max){
                    max=nums[j];
                }
            }
            result.push_back(max);
        }

        return result;
    }
};
