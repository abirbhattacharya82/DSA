#include<bits/stdc++.h>
using namespace std;
bool check(int row,int col,vector<string> &vc)
    {
        int n=vc.size();
        int r=row;
        int c=col;
        while(r>=0 && c>=0)
        {
            if(vc[r][c]=='Q')
                return false;
            c--;
            r--;
        }
        r=row;
        c=col;
        while(c>=0)
        {
            if(vc[r][c]=='Q')
                return false;
            c--;
        }
        r=row;
        c=col;
        while(r<n && c>=0)
        {
            if(vc[r][c]=='Q')
                return false;
            r++;
            c--;
        }
        return true;
        
    }
    void solve(int col,int n,vector<string> &vc,vector<vector<string>> &ans)
    {
        if(col==n)
        {
            ans.push_back(vc);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(check(row,col,vc))
            {
                vc[row][col]='Q';
                solve(col+1,n,vc,ans);
                vc[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> vc;
        string s(n,'.');
        for(int i=0;i<n;i++)
            vc.push_back(s);
        solve(0,n,vc,ans);
        return ans;
    }
int main()
{
  int n;
  cin>>n;
  vector<vector<string>> vc=solveQueens(n);
  for(auto it:vc){
    for(auto i:it)
       cout<<i;
  cout<<endl;
  }
  return 0;
}
