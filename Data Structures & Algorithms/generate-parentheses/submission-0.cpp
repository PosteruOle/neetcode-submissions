class Solution {
public:
    vector<string> result;
    void traversal(string tmp, int open, int closed, int n){
        if(open==0 && closed==n){
            result.push_back(tmp);
            return;
        }
        
        if(open>n || closed>n){
            return;
        }

        if(open==0){
            traversal(tmp+"(", 1, closed, n);
            return;
        }

        traversal(tmp+")", open-1, closed+1, n);
        traversal(tmp+"(", open+1, closed, n);
    }
    vector<string> generateParenthesis(int n) {
        traversal("(", 1, 0, n);
        return result;
    }
};
