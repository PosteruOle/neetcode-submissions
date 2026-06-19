class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int maximalAmount=0;
        int currentAmount;

        while(left<=right){
            currentAmount=min(heights[left], heights[right])*(right-left);
            maximalAmount=max(maximalAmount,currentAmount);
            
            if(heights[left]<heights[right]){
                left++;
            } else {
                right--;
            }
        }

        return maximalAmount;    
    }
};
