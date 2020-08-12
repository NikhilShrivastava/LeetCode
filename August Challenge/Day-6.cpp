class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> v;
        for(int i=0;i<a.size();i++)
        {
            if(a[abs(a[i])-1]<0)
                v.push_back(abs(a[i]));
            else
                a[abs(a[i])-1]=-(a[abs(a[i])-1]);
        }
        return v;
    }
};
