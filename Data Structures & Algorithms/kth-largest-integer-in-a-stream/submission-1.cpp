#include <queue>

class KthLargest {
public:
    priority_queue<int> heap;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k=k;

        for(int num: nums){
            heap.push(num);
        }
    }
    
    int add(int val) {
        heap.push(val);
        vector<int> help;
        int element;

        for(int i=1;i<=k;i++){
            element=heap.top();
            heap.pop();
            help.push_back(element);
        }

        for(int x: help){
            heap.push(x);
        }

        return element;
    }
};
