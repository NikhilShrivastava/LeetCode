class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pos=0;
        for(int i=0;s[i]!='\0';++i)
        {
            while(t[pos] && t[pos]!=s[i])
                pos++;
            if(t[pos]=='\0')
                return false;
            pos++;
        }
        return true;
    
                
        
    }
};
