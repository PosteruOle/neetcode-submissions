class Solution {
public:
    void traversal(vector<int>& nums, vector<vector<int>>& result, vector<int> current_subset, int p){
        int n=nums.size();
        
        if(p>n){
            return;
        }

        if(find(result.begin(), result.end(), current_subset)==result.end()){
            result.push_back(current_subset);
        }
        
        traversal(nums, result, current_subset, p+1);
        current_subset.push_back(nums[p]);
        traversal(nums, result, current_subset, p+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current_subset;
        int n=nums.size();
        
        traversal(nums, result, current_subset, 0);
        
        return result;    
    }
};
