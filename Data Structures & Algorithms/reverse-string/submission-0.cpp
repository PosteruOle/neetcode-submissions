class Solution {
public:
    void reverseString(vector<char>& s) {
        string result;
        int n=s.size();

        for(int i=n-1;i>=0;i--){
            result[n-1-i]=s[i];
        }

        for(int i=0;i<n;i++){
            s[i]=result[i];
        }
    }
};