class Solution {
public:
    static const int mod=1e9+7;
    int fun(int i,int j,int m,int n,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp,int k,long long sum)
    {
        if(i<0 || j<0 || i>=m || j>=n)
            return 0;
        sum = (sum + grid[i][j]) % k;
        if(i==m-1 && j==n-1)
        {
            if(sum==0)
                return 1;
            return 0;
        }
        if(dp[i][j][sum]!=-1)
            return dp[i][j][sum];
        int right=fun(i,j+1,m,n,grid,dp,k,sum)%mod;
        int down=fun(i+1,j,m,n,grid,dp,k,sum)%mod;
        return dp[i][j][sum]=(right+down)%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>> (n + 1, vector<int> (k + 1, -1)));
        return fun(0,0,m,n,grid,dp,k,0LL);
    }
};
