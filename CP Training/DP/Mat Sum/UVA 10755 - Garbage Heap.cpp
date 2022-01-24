/*
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
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

const int mod = 1000000007;
const int N = 100005;
const ll inf = mod * 1LL * mod;

ll a[21][21][21];

int main() {

#ifdef SunWalker
    //read;
   //write;
#endif
fastread;

  int t;
  cin >> t;
  while (t--) {
    memset(a, 0, sizeof(a));
    int l, n, m;
    cin >> l >> n >> m;
    ll mx = -inf;
    FOR1(i, 1, l) {
      FOR1(j, 1, n) {
        FOR1(k, 1, m) {
          cin >> a[i][j][k];
          mx = max(mx, a[i][j][k]);
          a[i][j][k]+= a[i][j - 1][k];
          a[i][j][k]+= a[i][j][k - 1];
          a[i][j][k]-= a[i][j - 1][k - 1];
        }
      }
    }
    if (mx < 0) {
      cout << mx << endl;
      if (t > 0) cout << endl;
      continue;
    }
    ll ans = 0;
    FOR1(i1, 1, n) {
      FOR1(j1, 1, m) {
        FOR1(i2, i1, n) {
          FOR1(j2, j1, m) {
            ll cur = 0;
            FOR1(k, 1, l) {
              ll p = a[k][i2][j2] - a[k][i1 - 1][j2] - a[k][i2][j1 - 1] + a[k][i1 - 1][j1 - 1];
              cur = max(0LL, cur + p);
              ans = max(ans, cur);
            }
          }
        }
      }
    }
    cout << ans << endl;
    if (t > 0) cout << endl;
  }
  return 0;
}
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
long long V3[21][21][21], V2[21][21][21];

int main() {
    int tc, A, B, C;
    int i, j, k;
    scanf("%d", &tc);
    while(tc--) {
        long long mx = V3[0][0][0];
        scanf("%d %d %d", &A, &B, &C);
        memset(V2, 0, sizeof(V2));
        for(i = 0; i < A; i++) {
            for(j = 0; j < B; j++) {
                for(k = 0; k < C; k++) {
                    scanf("%lld", &V3[i][j][k]);
                    V2[i][j][k] = V3[i][j][k];
                    if(i)   V2[i][j][k] += V2[i-1][j][k];
                    mx = max(mx, V3[i][j][k]);
                }
            }
        }
    int i, j, k, p, q;
    for(p = 0; p < A; p++)
    for(q = p; q < A; q++) {
        for(i = 0; i < B; i++) {
            long long sum[21] = {}, tmp;
            for(j = i; j < B; j++) {
                tmp = 0;
                for(k = 0; k < C; k++) {
                    sum[k] += V2[q][j][k];
                    if(p)   sum[k] -= V2[p-1][j][k];
                    tmp += sum[k];
                    mx = max(mx, tmp);
                    if(tmp < 0) tmp = 0;
                }
            }
        }
    }
    printf("%lld\n", mx);
    if(tc)
            puts("");
    }
    return 0;
}



