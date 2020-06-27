//Legendre's 3-square theorem
class Solution {
public:
    int numSquares(int n) {
        if(ceil(sqrt(n))==floor(sqrt(n)))
            return 1;
        while(n%4==0)   //Remove 4^a term
            n/=4;
        
        if(n%8==7)      //check if the no now is in the form of (8b + 7)
            return 4;
        
        for(int i=1;i*i<=n;++i)
        {
            int base = sqrt(n-i*i);
            if(base*base==(n-i*i))
                return 2;
        }
        return 3;
    }
};
//DP TABULATION
class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0] = 0;
        
        for(int i=1;i<=n;++i)
        {
            dp[i] = i;
            for(int j=1;j*j<=i;++j)
            {
                int sq = j*j;
                dp[i] = min(dp[i],1+dp[i-sq]);
            }
        }
        return dp[n];
    }
};

//Recursion + Memoization
class Solution {
    vector<int> dp;
    
    int solve(int n)
    {
        if(n<=3)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        
        int ans = n;
        for(int i=1;i*i<=n;++i)
           ans = min(ans,1+solve(n-i*i)); 
        
        dp[n] = ans;
        return ans;
    }
public:
    int numSquares(int n) {
        dp.resize(n+1,-1);
        int ans = solve(n);
        return ans;
    }
};


//Recursion
class Solution {
    int solve(int n)
    {
        if(n<=3)
            return n;
        
        int ans=n;
        for(int i=1;i*i<=n;++i)
           ans = min(ans,1+solve(n-i*i)); 
            
        return ans;
    }
public:
    int numSquares(int n) {
        int ans = solve(n);
        return ans;
    }
};
