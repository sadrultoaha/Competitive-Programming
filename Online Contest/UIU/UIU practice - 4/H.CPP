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

int main()
{
fastread;
#ifdef SunWalker
    //read;
   //write;
#endif

     ll n,team[100010],A=0,B=0,C=0,way1=0,way2=0,x=0;
     cin>>n;
     FOR(i,n){cin>>team[i];}
     sort(team,team+n);
     A=team[0];
     B=team[1];
     C=team[2];
     if(1&n){
          FOR1(i,4,n-1)
          {
             if(!(1&i))
             {
                  way1=team[i]+A+(2*B);
                  way2=team[i]+team[i-1]+(2*A);
                  x += min(way1,way2);
             }
          }
          cout<<x+A+B+C<<"\n";
     }
     else
     {
          FOR1(i,3,n-1)
          {
             if(1&i)
             {
                  way1=team[i]+A+(2*B);
                  way2=team[i]+team[i-1]+(2*A);
                  x += min(way1,way2);
             }
          }
          cout<<x+B<<"\n";
     }


return 0;
}
