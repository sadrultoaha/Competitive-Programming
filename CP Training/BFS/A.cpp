/// BFS

#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ft              first
#define sd              second
#define bn              begin
#define en              end
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
int dis[33];
int BFS(vector<int>G[],int sr,int t)
{
    int cnt=0;
    mem(dis,-1);
    queue<int>Q;
    Q.push(sr);
    dis[sr]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        FOR(i,G[u].size())
        {
            int v=G[u][i];
            if(dis[v]==-1 && dis[u]<t)
            {
                dis[v] = dis[u]+1;
                cnt++;
                Q.push(v);
            }
        }
    }
    return cnt;
}



int main()
{
#ifdef SunWalker
    read;
   //write;
#endif

int E,cs=1;
while(cin>>E,!(E==0))
{
    vector<int>G[33];
    int U,V,cnt=0,s,tt,idx=1;
    map<int,int>N;
    FOR(i,E)
    {
        cin>>U>>V;
        if(!N[U])N[U]=idx++;
        if(!N[V])N[V]=idx++;
        U= N[U];
        V= N[V];
        G[U].pb(V);
        G[V].pb(U);
    }
    idx--;
    while(cin>>s>>tt,!(s==0&&tt==0))
    {
       cnt = BFS(G,N[s],tt)+1;
       cnt=idx-cnt;
       cout<<"Case "<<cs++<<": "<<cnt<<" nodes not reachable from node "<<s<<" with TTL = "<<tt<<".\n";
    }

}

return 0;
}
