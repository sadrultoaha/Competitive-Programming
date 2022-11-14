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

bool visited[2010];
int cnt=1;
bool dfs(vector<int>G[],int src,int nodes)
{
    visited[src] = true;
    for(int i=0;i<G[src].size();i++)
    {
        int u = G[src][i];
        if(!visited[u]){ cnt++;dfs(G,u,nodes);}
    }
    if(cnt<nodes)return 0;
    else return 1;
}

int main()
{
#ifdef SunWalker
    read;
   //write;
#endif

     int n,e,u,v,w;
     while(scanf("%d%d",&n,&e)!=EOF)
     {
          vector<int>G[2010];
          if(n==0&&e==0)return 0;
          bool ok=true;
          FOR(i,e)
          {
               scanf("%d%d%d",&u,&v,&w);
               if(w==2)
               {
                    G[u].pb(v);
                    G[v].pb(u);
               }
               else G[u].pb(v);
          }
          FOR1(i,1,n)
          {
                dfs(G,i,n);
                if(!dfs(G,i,n)){ok=false;break;}
                cnt=1;mem(visited,0);
          }
          if(ok)printf("1\n");
          else printf("0\n");
          mem(visited,0);
     }

return 0;
}

