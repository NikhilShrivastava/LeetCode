class Solution {
public:
    static bool comparator(const vector<int> &a, const vector<int> &b)
    {
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<vector<int>> result;
        sort(people.begin(),people.end(),comparator);
        
         for(int i=people.size()-1;i>=0;i--)
           result.insert(result.begin()+people[i][1],people[i]);

        return people;
        
    }
};
