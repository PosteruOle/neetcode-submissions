class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();

        for(int i=0;i<n;i++){
            bool flag=false;
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                    flag=true;
                    temperatures[i]=j-i;
                    break;
                }
            }

            if(!flag){
                temperatures[i]=0;
            }
        }

        return temperatures;
    }
};
