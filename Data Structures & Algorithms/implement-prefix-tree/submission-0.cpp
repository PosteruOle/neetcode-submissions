class TrieNode {
public:
    vector<TrieNode*> children;
    bool endOfWord;

    TrieNode(){
        children.resize(26);

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }

        endOfWord=false;
    }
};

class PrefixTree {
public:
    TrieNode* root;

    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode *current=root;

        for(char c: word){
            int index=c-'a';
            
            if(current->children[index]==NULL){
                current->children[index]=new TrieNode();
            }

            current=current->children[index];
        }

        current->endOfWord=true;
    }
    
    bool search(string word) {
        TrieNode *current=root;

        for(char c: word){
            int index=c-'a';

            if(current->children[index]==NULL){
                return false;
            }

            current=current->children[index];
        }

        return current->endOfWord;    
    }
    
    bool startsWith(string prefix) {
        TrieNode *current=root;

        for(char c: prefix){
            int index=c-'a';

            if(current->children[index]==NULL){
                return false;
            }

            current=current->children[index];
        }

        return true;
    }
};
