class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int result=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int minHeight=min(heights[i], heights[j]);
                int distance=j-i;

                result=max(result, minHeight*distance);
            }
        }

        return result;    
    }
};
