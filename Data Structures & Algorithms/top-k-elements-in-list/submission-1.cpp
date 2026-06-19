#include <queue>
#include <unordered_map>

class Solution {
public:
    class Compare {
    public:
        bool operator()(pair<int, int> below, pair<int, int> above){
            return below.second<above.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        unordered_map<int, int> map;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> heap;
        
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }

        for(auto item: map){
            heap.push({item.first, item.second});
        }

        for(int i=0;i<k;i++){
            pair<int, int> current=heap.top();
            result.push_back(current.first);
            heap.pop();
        }

        return result;            
    }
};
