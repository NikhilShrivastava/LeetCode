class Solution {
public:
    int hIndex(vector<int>& citations) {
     
        sort(citations.begin(),citations.end());
        int temp = citations.size();
        for(auto x: citations)
        {
            if(x < temp)
                temp--;
            else
                break;
        }
        return temp;
        
        
    }
};
