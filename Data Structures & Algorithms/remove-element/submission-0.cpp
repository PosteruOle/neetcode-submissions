class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> help;

        for(int num: nums){
            if(num!=val){
                help.push_back(num);
            }
        }

        int n=help.size();

        for(int i=0;i<n;i++){
            nums[i]=help[i];
        }

        return n;  
    }
};