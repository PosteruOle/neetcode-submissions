class MyHashSet {
public:
    vector<int> set;
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        bool flag=false;
        for(int element: set){
            if(element==key){
                flag=true;
                break;
            }
        }

        if(!flag){
            set.push_back(key);
        }
    }
    
    void remove(int key) {
        bool flag=false;
        int n=set.size();
        int index;

        for(int i=0;i<n;i++){
            if(set[i]==key){
                flag=true;
                index=i;
                break;
            }
        }

        if(flag){
            set.erase(set.begin()+index);
        }
    }
    
    bool contains(int key) {
        for(int element: set){
            if(element==key){
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */