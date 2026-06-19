class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return s;
        }
        string result="";
        int left, right;

        for(int i=0;i<n;i++){
            left=i-1;
            right=i+1;
            string tmp="";
            tmp+=s[i];
            while(left>=0 && right<n && s[left]==s[right]){
                tmp=s[left]+tmp+s[right];
                left--;
                right++;
            }

            if(tmp.size()>result.size()){
                result=tmp;
            }

            left=i;
            right=i+1;
            tmp="";
            while(left>=0 && right<n && s[left]==s[right]){
                tmp=s[left]+tmp+s[right];
                left--;
                right++;
            }
            if(tmp.size()>result.size()){
                    result=tmp;
            }
        }

        return result;    
    }
};
