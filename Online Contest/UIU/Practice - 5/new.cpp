/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))

#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " ";
        call(++it, rest...);
    }
};
int color[400];
int vis[400];
int cnt=0;
void print(int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<color[i]<<" ";
    }
}
bool dfs(int u,vector<int > g[])
{
   vis[u]=1;
    for(int i=0;i<g[u].size();i++)
    {
        if(!vis[g[u][i]])
        {
            color[g[u][i]] = color[u]^1;
            vis[g[u][i]]=1;
            dfs(g[u][i],g);
        }
        else if(color[u] ^ color[g[u][i]]==0)
            return 0;
    }

    return 1;
}

int main()
{
    read;
    int T;
    cin>>T;
    while(T--)
    {
        vector<int > G[400];
        int v,e;
        cin>>v>>e;
        for(int i=0;i<e;i++)
        {
            int a,b;
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        dfs(0,G);
//        if(dfs(0,0,G))cout<<cnt<<"\n";
//        else cout<<"-1\n";
        print(v);
        cout<<"\n";
        MEM(color,-1);
        MEM(vis,0);
        cnt=0;

    }


}
