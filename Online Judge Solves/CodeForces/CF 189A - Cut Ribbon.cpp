#include<bits/stdc++.h>
using namespace std;

int dp[10000],n,a,b,c;

int main()
{
    cin>>n>>a>>b>>c;
   memset(dp,-1,sizeof(dp));
    dp[0]=0;
    for(int i=0;i<=n;i++)
    {
        if(dp[i]!=-1)
        {
           //cout<<dp[i+a]<<": "<<i+a<<">";
           dp[i+a] = max(dp[i]+1,dp[i+a]);
         //  cout<<dp[i+a]<<"="<<dp[i]+1<<endl;
          // cout<<dp[i+b]<<": "<<i+b<<">";
           dp[i+b] = max(dp[i]+1,dp[i+b]);
          // cout<<dp[i+b]<<"="<<dp[i]+1<<endl;
          // cout<<dp[i+c]<<": "<<i+c<<">";
           dp[i+c] = max(dp[i]+1,dp[i+c]);
          // cout<<dp[i+c]<<"="<<dp[i]+1<<endl;
        }

    }

    cout<<dp[n];




}
