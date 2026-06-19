class KthLargest {
private:
    int k;
    priority_queue<int> heap;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int num: nums){
            heap.push(num);
        }    
    }
    
    int add(int val) {
        heap.push(val);
        vector<int> help;
        int top;

        for(int i=1;i<=k;i++){
            top=heap.top();
            help.push_back(top);
            heap.pop();
        }

        for(int num: help){
            heap.push(num);
        }

        return top;
    }
};
