class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<string> sky;
        int result=0;
        
        if(n==1){
            return stoi(tokens[0]);
        }

        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                sky.push(tokens[i]);
            } else if(tokens[i]=="+"){
                string o1=sky.top();
                sky.pop();
                string o2=sky.top();
                sky.pop();
                int operand1=stoi(o1);
                int operand2=stoi(o2);
                result=operand1+operand2;
                sky.push(to_string(result));
            } else if(tokens[i]=="-"){
                string o1=sky.top();
                sky.pop();
                string o2=sky.top();
                sky.pop();
                int operand1=stoi(o1);
                int operand2=stoi(o2);
                result=operand2-operand1;
                sky.push(to_string(result));
            } else if(tokens[i]=="*"){
                string o1=sky.top();
                sky.pop();
                string o2=sky.top();
                sky.pop();
                int operand1=stoi(o1);
                int operand2=stoi(o2);
                result=operand1*operand2;
                sky.push(to_string(result)); 
            } else {
                string o1=sky.top();
                sky.pop();
                string o2=sky.top();
                sky.pop();
                int operand1=stoi(o1);
                int operand2=stoi(o2);
                result=operand2/operand1;
                sky.push(to_string(result));
            }
        }

        return result;    
    }
};
