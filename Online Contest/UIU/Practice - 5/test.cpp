#include<bits/stdc++.h>
using namespace std;
int color[400];
int cnt1=0,cnt2=0;
bool bfs(vector<int>G[],int u)
{
    queue<int> q;
    q.push(u);
    color[u]=0;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        int vsize=G[x].size();
        for(int i=0;i<vsize;i++)
        {
            if(color[G[x][i]]==-1)
            {
                if(color[x]==0) color[G[x][i]]=1;
                else color[G[x][i]]=0;
                q.push(G[x][i]);
            }
            if(color[G[x][i]]==color[x])return false;
        }
    }
    return true;
}
int main()
{
    freopen("IN.txt","r",stdin);
    int T;
    cin>>T;
    while(T--)
    {
        memset(color,-1,sizeof(color));
        vector<int>G[400];
        int v,e;
        cin>>v>>e;
        for(int i=0;i<e;i++)
        {
            int a,b;
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        bfs(G,0);
        for(int i=1;i<v;i++)
        {
            if(color[i]==-1)
            {
                bfs(G,i);
            }
        }

        bool ok=true;
        for(int i=0;i<v-1;i++)
        {
            //cout<<color[i]<<" ";
            if(color[i]==0)cnt1++;
            else if(color[i]==1)cnt2++;
            if(color[i]==color[i+1]){ok=false;}
        }
        //cout<<"\n";
        if(ok)cout<<min(cnt1,cnt2)<<"\n";
        else cout<<"-1"<<"\n";
        cnt1=0;cnt2=0;
    }
}
