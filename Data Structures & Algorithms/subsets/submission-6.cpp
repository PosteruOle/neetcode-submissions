class Solution {
public:
    vector<vector<int>> result;

    void traversal(vector<int>& nums, int p, vector<int>& current){
        int n=nums.size();
        
        if(p>n){
            return;
        }

        if(p==n){
            result.push_back(current);
            return;
        }

        current.push_back(nums[p]);
        traversal(nums, p+1, current);
        current.pop_back();
        traversal(nums, p+1, current);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;

        traversal(nums, 0, current); 

        return result;
    }
};
