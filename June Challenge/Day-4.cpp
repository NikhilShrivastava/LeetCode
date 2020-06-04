void reverseString(vector<char>& s) {
        
        int i=0,j=s.size()-1;
        char t;
        while(i<j)
        {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
            i++;
            j--;
        }
        
        
    }
