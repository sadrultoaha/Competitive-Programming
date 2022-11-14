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
bool visited[100];
int cn=1;
void dfs(vector<int>G[],int src,int nodes)
{
    visited[src] = true;
    for(int i=0;i<G[src].size();i++)
    {
        int u = G[src][i];
        if(!visited[u]){cn++; dfs(G,u,nodes);}
    }
}
int main()
{
#ifdef SunWalker
    read;
   //write;
#endif

     int T;
     cin>>T;
     while(T--)
     {
          vector<int>G[100];
          int in,u,v,n,cnt=0;
          char sz;
          string str,inp;
          cin>>sz;
          n=sz-64;
          getchar();
          while(getline(cin,str))
          {
               if(str[0]=='\0')break;
               inp=str;
               u=inp[0]-65,v=inp[1]-65;
               G[u].pb(v);
               G[v].pb(u);
          }
          mem(visited,0);
          FOR(i,n)
          {
                  if(visited[i]==true)continue;
                  dfs(G,i,n);
                  cnt++;
          }
          cout<<cnt<<"\n";
          if(t)cout<<"\n";
     }


return 0;
}

