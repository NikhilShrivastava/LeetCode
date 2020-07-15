class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string result;
        int i=0;
        while(i<n)
        {
            while(i<n && s[i]==' ')
                i++;
            if(i >= n) break;
            int j=i+1;
            while(j<n && s[j]!=' ') 
                j++;
            string t=s.substr(i,j-i);
            if(result.length()==0)
                result=t;
            else
            {
                result = t + " " + result;
            }
            i=j+1;
        }
        return result;
    }
};
