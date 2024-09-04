class Solution {
public:
    int dp[20+1];
    int catalan(int n)
    {
        if(n==0 || n==1)
        {
            dp[n]=1;
            return dp[n];
        }
        if(dp[n]!=0)
        {
            return dp[n];
        }
        int result=0;
        for(int i=0;i<=n-1;i++)
        {
            result+=catalan(i)*catalan(n-i-1);
        }
        return result;
    }
    
    int numTrees(int n) {
    
    for(int i=0;i<=n;i++)
    {
        dp[i]=0;
    }
    return catalan(n);
        
        
    }
};