/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
int n,d,vis[200],lvl[200];
string st;

int bfs()
{
    queue<int>Q;
    memset(vis,-1,sizeof(vis));
    Q.push(0);
    lvl[0]=0;
    int u;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        if(u==n-1)return lvl[u];
        for(int i=u+1;i<=u+d;i++)
        {
            if(vis[i]==-1 && st[i]=='1')
            {
                vis[i]=1;
                lvl[i]=lvl[u]+1;
                Q.push(i);
            }
        }
    }
    return -1;

}
int main()
{

    cin>>n>>d;
    cin>>st;
    cout<<bfs()<<"\n";

}
