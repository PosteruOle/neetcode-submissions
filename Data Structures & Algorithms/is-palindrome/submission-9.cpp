class Solution {
public:
    bool isPalindrome(string s) {
        string new_s="";

        for(char c: s){
            if(isalnum(c)){
                new_s+=tolower(c);
            }
        } 

        int left=0;
        int right=new_s.size()-1;

        while(left<=right){
            if(new_s[left]!=new_s[right]){
                return false;
            }
            left++;
            right--;
        } 

        return true;  
    }
};
