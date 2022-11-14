#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,M,R,E[508],ans=0,slp=0,mM=0,mx=0;
    cin>>N>>M>>R;
    for(int i=0;i<N;i++)
    {
        cin>>E[i];
    }
    for(int i=0;i<=M;i+=R)
   {
        ans=0;
        for(int j=0;j<R;j++)
        {
             if(R>1)
            {
                ans+=E[j]*(j+1);
            }
            else ans+=E[j];
        }
        mx=max(mx,ans);
   }
   slp=ceil(double(N)/(R+1));
   if(slp==M)cout<<mx<<endl;
   else cout<<"-1"<<endl;

}
