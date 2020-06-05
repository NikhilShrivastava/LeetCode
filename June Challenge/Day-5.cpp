class Solution {
    vector<int>v;
public:
    Solution(vector<int>& w) {
        v.push_back(w[0]);
        for(int i=1;i<w.size();++i)
            v.push_back(v[i-1]+w[i]);   
        
        
    }
    
    int pickIndex() {
        int rand_weight = rand()%v[(v.size()-1)];
        return upper_bound(v.begin(),v.end(),rand_weight)-v.begin();
        
    }
};
