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


void CSP( vector<int>temp[],int freq[],int src,int frq)
{
     freq[src] = frq+1;
     FOR(i,temp[src].size())
     {
          int node = temp[src][i];
          if(freq[node]==0)CSP(temp,freq,node,(frq+1)%3);
     }
}

int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
     int T,cs=1;
     cin>>T;
     while(T--)
     {
          int V,E;
          vector<int>temp[100];
          int freq[100];
          int u,v;
          map<string,int>nm;
          string str,x,y;
          cin>>V>>E;
          FOR(i,V)
          {
               cin>>str;
               nm[str]=i;
          }
          FOR(i,E)
          {
               u,v;
               cin>>x>>y;
               u=nm[x];
               v=nm[y];
               temp[u].pb(v);
               temp[v].pb(u);
          }
          mem(freq,0);
          bool ok=true;
          int last=-1;
          FOR(i,V)
          {
               if(freq[i]==0)CSP(temp,freq,i,0);
               if(freq[i]==last){ok=false;break;}
               last=freq[i];
          }
          cout<<"Case "<<cs++<<": ";
          if(!ok)cout<<"Valar Morghulis\n";
          else cout<<"Valar Dohaeris\n";
     }
	return 0;
}
