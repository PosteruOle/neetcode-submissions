class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string realString="";
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                realString+=tolower(s[i]);
            }
        }

        n=realString.size();

        for(int i=0;i<=n/2;i++){
            if(realString[i]!=realString[n-1-i]){
                return false;
            }
        }

        return true;    
    }
};
