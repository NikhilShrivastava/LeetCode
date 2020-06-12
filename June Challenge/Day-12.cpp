class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> m;
    
    /** Initialize your data structure here. */
    RandomizedSet(){}
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.find(val)!=m.end())
            return false;
        
        v.push_back(val);
        m[val]=v.size()-1;
        return true;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val)==m.end())
            return false;
        
         auto it = m.find(val);
        v[it->second]=v.back();
        v.pop_back();
        m[v[it->second]] = it->second;
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%v.size()];
    }
};
