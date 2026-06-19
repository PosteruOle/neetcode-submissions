class KthLargest {
public:
    vector<int> nums;
    int k;
    
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        this->nums=nums;
    }
    
    int add(int val) {
        nums.push_back(val);
        int n=nums.size();

        sort(nums.begin(), nums.end());

        return nums[n-k];
    }
};
