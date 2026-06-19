class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;

        for(string token: tokens){
            if(token!="+" && token!="-" && token!="*" && token!="/"){
                stack.push(stoi(token));
            } else if(token=="+"){
                int a=stack.top();
                stack.pop();
                int b=stack.top();
                stack.pop();
                stack.push(a+b);
            } else if(token=="-"){
                int a=stack.top();
                stack.pop();
                int b=stack.top();
                stack.pop();
                stack.push(b-a);
            } else if(token=="*"){
                int a=stack.top();
                stack.pop();
                int b=stack.top();
                stack.pop();
                stack.push(a*b);
            } else if(token=="/"){
                int a=stack.top();
                stack.pop();
                int b=stack.top();
                stack.pop();
                stack.push(b/a);
            }
        }

        return stack.top();    
    }
};
