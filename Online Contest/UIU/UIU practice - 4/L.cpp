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
#define min3(a,b,c) min(min(a,b),c)

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
int dp[300][300];
int LevenshteinDistance(string s, int len_s, string t, int len_t)
{
  int cost;
  if(dp[len_s][len_t]!=-1)return dp[len_s][len_t];
  if (len_s == 0) return len_t;
  if (len_t == 0) return len_s;
  if (s[len_s-1] == t[len_t-1])
      cost = 0;
  else
      cost = 1;
  dp[len_s][len_t]=min(LevenshteinDistance(s, len_s - 1, t, len_t ) + 1,LevenshteinDistance(s, len_s - 1, t, len_t - 1) + cost);
  return dp[len_s][len_t];
}

int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
     fastread;
     int n,cs=1,sz1,sz2,k,dis=0;
     string key,pattern,sub;
     mem(dp,-1);
     cin>>sz1>>sz2>>k;
     cin>>pattern>>key;
     sub = key.substr(0,sz1);
     dis =LevenshteinDistance(key,sz2,pattern,sz1);
     if(sub==pattern)
          dis-=abs(sz1-sz2);

     if(dis<=k)cout<<"S\n";
     else cout<<"N\n";

return 0;
}
//LevenshteinDistance(s, len_s , t, len_t - 1) + 1,
