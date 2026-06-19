class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int number_of_zeros=0;
        int product=1;
        
        for(int num:nums){
            if(num==0){
                number_of_zeros++;
            } else {
                product*=num;
            }
        }

        cout << "Product is equal to: " << product << "." << endl;

        if(number_of_zeros>=2){
            for(int i=0;i<n;i++){
                nums[i]=0;
            }
        } else if(number_of_zeros==1){
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    nums[i]=0;
                } else {
                    nums[i]=product;
                }
            }
        } else {
            for(int i=0;i<n;i++){
                nums[i]=product/nums[i];
            }
        }

        return nums;
    }
};
