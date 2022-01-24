#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
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

    // Take Few Deep Breath
    // First Solve Than Do Code
    // Think Wisely Not Lazily
    // You Can Solve All In 2 Hrs
#endif

    int n,mx = -200;
    int arr[100][100];
    cin>>n;
    FOR(i,n)
    {
        FOR(j,n)
        {
            cin>>arr[i][j];
            mx = max(mx,arr[i][j]);
        }
    }
    FOR(i,n)
    {
        int sum[100]={};
        FOR1(i2,i,n-1)
        {
            int tm=0;
            FOR(j,n)
            {
                sum[j]+=arr[i2][j];
                tm+=sum[j];
                if(tm<0)tm=0;
                mx = max(mx,tm);
            }
        }
    }
    cout<<mx<<'\n';


    return 0;
}
