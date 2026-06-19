class Solution {
public:
    bool isPalindrome(string s) {
        string result="";

        for(char c: s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }

        string reversed=result;
        reverse(reversed.begin(), reversed.end());

        return result==reversed;
    }
};
