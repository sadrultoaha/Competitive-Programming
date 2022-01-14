#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a,b,x,y,sum=0,vis[101];
    cin>>n;
    cin>>a;
    memset(vis,-1,sizeof(vis));
    for(int i=0;i<a;i++)
    {
        cin>>x;
        if(vis[x]<0){sum+=x;vis[x]=1;}
    }
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>y;
         if(vis[y]<0){sum+=y;vis[y]=1;}
    }
     if(sum==n*(n+1)/2){cout<<"I become the guy."<<"\n";return 0;}
    else cout<<"Oh, my keyboard!"<<"\n";
}
