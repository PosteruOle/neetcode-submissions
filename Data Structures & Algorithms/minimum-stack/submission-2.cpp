#include <stack>

class MinStack {
private:
    stack<int> realStack;
    stack<int> minStack;
public:
    MinStack() {}
    
    void push(int val) {
        realStack.push(val);
        if(minStack.empty()){
            minStack.push(val);
            return;
        }
        int minimum=min(val, minStack.top());
        minStack.push(minimum);      
    }
    
    void pop() {
        realStack.pop();
        minStack.pop();
    }
    
    int top() {
        return realStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
