       
class Solution {
public:
    int nthUglyNumber(int n) {
        static vector<int> result(1,1);
        static int i =0;
        static int j =0;
        static int k = 0;
        while(result.size()<n)
        {
            result.push_back(min(result[i]*2, min(result[j]*3, result[k]*5)));
            if(result.back() == result[i]*2)
                i++;
            if(result.back() == result[j]*3)
                j++;
            if(result.back() == result[k]*5)
                k++;
        }
        return result[n-1];
    }

};
