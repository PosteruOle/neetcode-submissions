class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int result=0;

        while(left<=right){
            int distance=right-left;
            int height=min(heights[left], heights[right]);
            result=max(result, height*distance);

            if(heights[left]<heights[right]){
                left++;
            } else {
                right--;
            }
        }
        
        return result;
    }
};
