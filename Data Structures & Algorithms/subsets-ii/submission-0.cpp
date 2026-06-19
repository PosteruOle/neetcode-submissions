class Solution {
public:
    set<vector<int>> result;
    
    void traversal(vector<int>& nums, vector<int> current_subset, int p){
        int n=nums.size();
        
        if(result.find(current_subset)==result.end()){
            sort(current_subset.begin(), current_subset.end());
            result.insert(current_subset);
        }
        
        if(p>=n){
            return;
        }
        
        traversal(nums, current_subset, p+1);
        current_subset.push_back(nums[p]);
        traversal(nums, current_subset, p+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> final_result;
        vector<int> current_subset;
        int n=nums.size();
        
        traversal(nums, current_subset, 0);
        
        for(vector<int> v: result){
            final_result.push_back(v);
        }

        return final_result;     
    }
};
