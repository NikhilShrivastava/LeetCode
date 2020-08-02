class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int up=0,low=0;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
                up++;
            else
                low++;
        }
        return up==n || low==n || (up==1 && isupper(word[0]));
    }
};
