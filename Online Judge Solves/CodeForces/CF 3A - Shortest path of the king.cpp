
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
     char x1,x2;
     int y1,y2;
     cin>>x1>>y1>>x2>>y2;
     bool r=0,l=0,ru=0,rd=0;
     int r1=x1-97,r2=x2-97;
     int cnt = max(abs(r1-r2),abs(y1-y2));
     cout<<cnt<<"\n";
     while(1)
     {
          if((r1==r2) && (y1==y2))break;
          if(r2>r1){cout<<'R';r1++;r=1;}
          if(r2<r1){cout<<'L';r1--;l=1;}
          if(y2>y1){cout<<'U';y1++;if(r||l){ru=1;}}
          if(y2<y1){cout<<'D';y1--;if(r||l){rd=1;}}
          if(ru||rd){cout<<"\n";ru=0;rd=0;}
          else cout<<"\n";

     }

return 0;
}
