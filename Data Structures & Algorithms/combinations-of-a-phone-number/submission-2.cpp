class Solution {
public:
    map<char, string> letters;
    vector<string> result;
    void traversal(string digits, int p, string current){
        int n=digits.size();
        if(p>n){
            return;
        }

        if(p==n){
            result.push_back(current);
            return;
        }

        string available=letters[digits[p]];
        for(char c: available){
            traversal(digits, p+1, current+c);
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(n==0){
            return result;
        }

        letters['2']="abc";
        letters['3']="def";
        letters['4']="ghi";
        letters['5']="jkl";
        letters['6']="mno";
        letters['7']="pqrs";
        letters['8']="tuv";
        letters['9']="wxyz";
        
        traversal(digits, 0, "");
        
        return result;
    }
};