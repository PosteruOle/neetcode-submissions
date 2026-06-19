class Solution {
public:
    vector<vector<int>> result;
    void traversal(vector<int>& nums, vector<int> current_subset, int p){
        int n=nums.size();
        
        if(find(result.begin(), result.end(), current_subset)==result.end()){
            result.push_back(current_subset);
        }
        
        if(p>=n){
            return;
        }
        
        traversal(nums, current_subset, p+1);
        current_subset.push_back(nums[p]);
        traversal(nums, current_subset, p+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current_subset;
        int n=nums.size();
        
        traversal(nums, current_subset, 0);
        
        return result;    
    }
};
