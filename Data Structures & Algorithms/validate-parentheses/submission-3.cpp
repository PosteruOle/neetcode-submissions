class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> stack;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stack.push(s[i]);
            } else if(s[i]=='{'){
                stack.push(s[i]);
            } else if(s[i]=='['){
                stack.push(s[i]);
            } else if(s[i]==')'){
                if(stack.empty() || stack.top()!='('){
                    return false;
                }

                stack.pop();
            } else if(s[i]==']'){
                if(stack.empty() || stack.top()!='['){
                    return false;
                }

                stack.pop();
            } else if(s[i]=='}'){
                if(stack.empty() || stack.top()!='{'){
                    return false;
                }

                stack.pop();
            }
        } 

        if(!stack.empty()){
            return false;
        }

        return true;   
    }
};
