class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;

        for(int i=0;i<=n;i++){
            result.push_back(numberOfOnes(i));
        }


        return result;    
    }

    int numberOfOnes(int n){
        int result=0;
        int mask=1;

        for(int i=1;i<=sizeof(int)*8;i++){
            if((mask & n)!=0){
                result++;
            }

            mask<<=1;
        }

        return result;
    }
};
