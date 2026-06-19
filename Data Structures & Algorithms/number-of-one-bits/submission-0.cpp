class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter=0;
        unsigned mask=1;

        for(int i=1;i<=sizeof(uint32_t)*8;i++){
            if((mask & n)!=0){
                counter++;
            }
            mask<<=1;
        }

        return counter;
    }
};
