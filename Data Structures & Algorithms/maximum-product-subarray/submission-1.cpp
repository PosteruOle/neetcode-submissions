class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int product=1;
            
            for(int j=i;j<n;j++){
                product*=nums[j];

                if(product==0){
                    break;
                }

                result=max(result, product);
            }

            result=max(result, product);
        }

        return result;    
    }
};
