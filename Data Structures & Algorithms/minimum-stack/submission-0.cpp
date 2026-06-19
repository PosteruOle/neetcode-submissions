class MinStack {
private:
    vector<int> stack;
public:
    MinStack() {}
    
    void push(int val) {
        stack.push_back(val);      
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        int n=stack.size();
        int min=stack[0];

        for(int i=1;i<n;i++){
            if(stack[i]<min){
                min=stack[i];
            }
        }
        
        return min;
    }
};
