

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

int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
     ll R,x,y,ans=0;
     cin>>R;
     FOR(i,3)
     {
          cin>>x>>y;
          double dis = sqrt(pow((x-0),2.0)+pow((y-0),2.0));
          if(dis<=R)ans+=10;
          else if(dis<=(2*R))ans+=9;
          else if(dis<=(3*R))ans+=8;
          else if(dis<=(4*R))ans+=7;
          else if(dis<=(5*R))ans+=6;
          else if(dis<=(6*R))ans+=5;
          else if(dis<=(7*R))ans+=4;
          else if(dis<=(8*R))ans+=3;
          else if(dis<=(9*R))ans+=2;
          else if(dis<=(10*R))ans+=1;
     }
     cout<<ans<<"\n";


return 0;
}

