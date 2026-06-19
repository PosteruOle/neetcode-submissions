#include <vector>
#include <string>

class WordDictionary {
public:
    vector<string> words;
    
    WordDictionary() {}
    
    void addWord(string word) {
        words.push_back(word);
    }
    
    bool search(string word) {
        int n=words.size();

        for(int i=0;i<n;i++){
            if(word.length()!=words[i].length()){
                continue;
            }

            int index=0;
            while(index<words[i].length()){
                if(word[index]==words[i][index] || word[index]=='.'){
                    index++;
                } else {
                    break;
                }
            }

            if(index==words[i].length()){
                return true;
            }
        }

        return false;
    }
};
