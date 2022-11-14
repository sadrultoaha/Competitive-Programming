/* *********************************************************************
   *                                                                   *
   * Solved By : UIU_Asteroids                                         *
   * Team Member : Imu, Uchchash, Toaha                                *
   *                                                                   *
   *********************************************************************
*/
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

int V,E,K,u,v;
vector<int>temp[50100];
int freq[50100];
void CSP(int src,int frq)
{
     freq[src] = frq+1;
     FOR(i,temp[src].size())
     {
          int node = temp[src][i];
          if(freq[node]==0)CSP(node,(frq+1)%K);
     }
}

int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
     fastread;
     cin>>V>>E>>K;
	FOR(i,E)
	{
	     u,v;
	     cin>>u>>v;
	     u--;v--;
	     temp[u].pb(v);
	     temp[v].pb(u);
	}
	if(E*K==E && E>0){cout<<"-1\n";return 0;}
	mem(freq,0);
     FOR(i,V)
     {
          if(freq[i]==0)CSP(i,0);
          cout<<freq[i]<<"\n";
     }
	return 0;
}
