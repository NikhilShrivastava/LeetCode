class MyHashSet {
public:
    int *arr;
public:
    /** Initialize your data structure here. */
    MyHashSet() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
       arr=new int[1000001] ;
       memset(arr,-1,sizeof(arr));
    }
    
    void add(int key) {
        arr[key]=1;
    }
    
    void remove(int key) {
        arr[key]=-1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return arr[key]==1;
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
