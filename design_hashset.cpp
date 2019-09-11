class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        m.resize(1000000,0);
    }
    
    void add(int key) {
        m[key]=1;
    }
    
    void remove(int key) {
        m[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return m[key]==1;
    }
private:
    vector<int> m;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
