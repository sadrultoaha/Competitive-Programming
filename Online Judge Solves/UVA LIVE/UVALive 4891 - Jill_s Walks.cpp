#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef pair<ll,ll> pll;

#define FOR(i,N) for(int i=0;i<N;i++)
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
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

     int biCo(int n, int k)
     {
          int res = 1;

          if ( k > n - k )
               k = n - k;
          for (int i = 0; i < k; ++i)
          {
               res *= (n - i);
               res /= (i + 1);
          }

          return res;
     }

     int main(int argc, char const *argv[])
     {
          int n,m,cs=1;
          while(cin>>n>>m,!(n==0&&m==0))
          {
               n--;m--;
               int N=n+m,K=n;
               cout<<"Case "<<cs++<<": "<<biCo(N,K)<<"\n";

          }

     }


