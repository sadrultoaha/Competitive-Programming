#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N;i>0;i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define f               first
#define s               second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()


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

int vis[1008];
int nodes[1008];
vector<int>vc[1008];

void dfs(int s)
{
    vis[s]=1;
    FOR(i,vc[s].size())
    {
        int v = vc[s][i];
        if(vis[v]==0)
        {nodes[v]++;
        dfs(v);}
    }
    return ;
}
int main()
{
    int T,cs=1;
    cin>>T;
    while(T--)
    {

        int city[1008];
        MEM(city,0);
        MEM(nodes,0);
        FOR(i,1008)vc[i].clear();
        int n,m,k,src,reachable=0;
        cin>>k>>n>>m;

        FOR(i,k) cin>>city[i];
        FOR(j,m)
        {
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            vc[u].pb(v);
        }
        FOR(i,k){MEM(vis,0);int y=city[i]-1; nodes[y]++;dfs(y);}
        FOR(i,n){if(nodes[i]>=k)reachable++;}
        cout<<"Case "<<cs<<": "<<reachable<<"\n";
        cs++;
    }

return 0;
}
