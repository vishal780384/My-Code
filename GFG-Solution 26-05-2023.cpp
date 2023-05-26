class Solution{
    public:
    int mod = 1e9+7;
    int solve(int n,int x,int num,vector<vector<int>> &dp){
        if(n==0)return 1;
        if(num>n or n<0)return 0;
        if(dp[n][num]!=-1)return dp[n][num];
        int t = pow(num,x);
        return dp[n][num]=(solve(n-t,x,num+1,dp)+ solve(n,x,num+1,dp))%mod;
    }
  
    int numOfWays(int n, int x) {
      vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
      return solve(n,x,1,dp);
    }
};
