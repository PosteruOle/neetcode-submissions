class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        sort(s1.begin(), s1.end());

        cout << "Sorted S1 string: " << s1 << endl;

        for(int i=0;i<m;i++){
            string subString;
            if(i+n-1<m){
                subString=s2.substr(i, n);
                sort(subString.begin(), subString.end());

                cout << "Sorted subString string: " << subString << "." << endl;

                if(subString==s1){
                    return true;
                }
            }
        }

        return false;
    }
};
