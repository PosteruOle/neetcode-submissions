class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result=0;
        uint32_t mask=1;

        for(int i=1;i<=sizeof(uint32_t)*8;i++){
            if((mask & n)!=0){
                result++;
            }

            mask<<=1;
        }


        return result;
    }
};
