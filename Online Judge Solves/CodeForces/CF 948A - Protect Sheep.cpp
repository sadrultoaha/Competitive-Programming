#include<bits/stdc++.h>
using namespace std;
int main()
{
    int R,C,x=1,ie=1,je=1,F=0;

    char G[501][501];
    freopen("IN.txt","r",stdin);
    cin>>R>>C;
    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            cin>>G[i][j];
            ie=i;
            je=j;
        if(G[i][j]=='W')
        {

                if(G[ie][je-1]=='.')G[ie][je-1]='D';

                if(G[ie-1][je]=='.')G[ie-1][je]='D';
        }

        }
    }
    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            ie=i;
            je=j;

            if(G[i][j]=='W')
        {
                if(G[ie][je+1]=='.')G[ie][je+1]='D';

                if(G[ie+1][je]=='.')G[ie+1][je]='D';
        }
         if(G[i][j]=='S')
        {
                if(G[i][j-1]=='W')F=1;
                if(G[i-1][j]=='W')F=1;
                if(G[i][j+1]=='W')F=1;
                if(G[i+1][j]=='W')F=1;
        }
        }
    }

    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=C;j++)
        {
            if(F!=1 && i==1 && j==1)cout<<"Yes"<<endl;
            if(F==0)cout<<G[i][j];
        }
        if(F==0)cout<<endl;
    }

    if(F==1)cout<<"No"<<endl;

}
