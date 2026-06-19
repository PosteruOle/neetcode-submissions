#include <iostream>
#include <map>
#include <unordered_map>
#include <queue>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> map;
        priority_queue<pair<int, int>> queue;
        vector<int> result;

        for(int num: nums){
            map[num]++;
        }

        for(auto item: map){
            queue.push(make_pair(item.second, item.first));
        }

        for(int i=1;i<=k;i++){
            pair<int, int> p=queue.top();
            queue.pop();
            result.push_back(p.second);
        }

        return result;
    }
};
