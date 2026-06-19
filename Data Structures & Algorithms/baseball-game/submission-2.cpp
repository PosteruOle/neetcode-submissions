#include <stack>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        stack<int> stack;
        int total=0;

        for(int i=0;i<n;i++){
            if(operations[i]!="+" && operations[i]!="C" && operations[i]!="D"){
                int current=stoi(operations[i]);
                total+=current;
                stack.push(current);
            } else if(operations[i]=="+"){
                int top1=stack.top();
                stack.pop();
                int top2=stack.top();
                stack.pop();
                total+=top1+top2;
                stack.push(top2);
                stack.push(top1);
                stack.push(top1+top2);
            } else if(operations[i]=="C"){
                int top=stack.top();
                stack.pop();
                total-=top;
            } else {
                int top=stack.top();
                stack.push(top*2);
                total+=top*2;
            }
        }

        return total;
    }
};