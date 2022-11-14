#include <bits/stdc++.h>
using namespace std;

#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x)         push_front(x)
#define pb(x)       push_back(x)
#define eb(x)        emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)         (int)x.size()
#define debug(x)     cerr << #x << " = " << (x) <<endl
#define READ  freopen("in.txt", "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

# define dbg(args...)    {string sss(#args);sss+=',';cerr<<"-->";debugger::call(all(sss), args);cerr<<"\n";}
# define dbgA(A, n)      {cerr<<"-->"<<#A<<"=(";forn(i, n)cerr<<A[i]<<" ";cerr<<")\n";}
# define dbgA2(A, n, m)  {cerr<<"-->"<<#A<<"=\n";forn(i, n){forn(j, m){cerr<<setw(4)<<A[i][j]<<" ";}cerr<<"\n";}cerr<<"\n";}

struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
            string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cerr << b << " = " << a << " ";
        call(++it, ed, rest...);
    }
};
int main(){
    //READ
    int t,cas=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        ll arr[30010];
        bool flag=false;
        long long sum=0,sm2=-LONG_MAX,cnt=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            if(arr[i]>=0)sum+=arr[i];
            sm2 = max(sm2,arr[i]);
        }
        ll last;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                if(flag){cnt++;flag=false;}
            }
            else flag=true;
            last = arr[i];
        }
        if((last<0 && cnt>0) || (sum==0 && cnt>0))cnt--;

        if(sum==0)
            printf("Case %d: %lld %lld\n",cas++,sm2,cnt);
        else
            printf("Case %d: %lld %lld\n",cas++,sum,cnt);
    }
return 0;
}
