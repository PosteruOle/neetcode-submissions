class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<int> sky;
        
        for(int i=0;i<n;i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                sky.push(s[i]);
            } else if(s[i]=='}'){
                if(!sky.empty() && sky.top()=='{'){
                    sky.pop();
                } else {
                    return false;
                }
            } else if(s[i]==']'){
                if(!sky.empty() && sky.top()=='['){
                    sky.pop();
                } else {
                    return false;
                }
            } else {
                if(!sky.empty() && sky.top()=='('){
                    sky.pop();
                } else {
                    return false;
                }
            }
        }

        return sky.empty();    
    }
};
