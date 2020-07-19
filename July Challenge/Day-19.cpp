class Solution {
public:
    string addBinary(string a, string b) {
       int alen = a.length();
        int blen = b.length();
        int i = 0,carry = 0;

        string sum = "";

        while(i < alen || i < blen || carry != 0)
        {
            int x = 0, y = 0;

            if(i < alen && a[alen-1-i] == '1')
                x = 1;

            if(i < blen && b[blen-1-i] == '1')
                y = 1;

            sum.insert(sum.begin(),(x+y+carry)%2 + '0');
            carry = (x+y+carry)/2;
            i++;
        }
        
        return sum; 
    }
};
