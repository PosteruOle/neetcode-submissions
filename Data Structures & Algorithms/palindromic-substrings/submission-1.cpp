class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int result=0;
        int left;
        int right;

        for(int i=0;i<n;i++){
            left=i;
            right=i;
            
            while(left>=0 && right<n && s[left]==s[right]){
                result++;
                left--;
                right++;
            }
            
            left=i;
            right=i+1;
            
            while(left>=0 && right<n && s[left]==s[right]){
                result++;
                left--;
                right++;
            }
        }
        
        return result;    
    }
};
