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
ll arr[110][110];
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
    fastread;
    int t,tc=1;
    cin>>t;
    while(t--)
    {
        int n,m,k,mxarea=0,area;
        ll mxcost=0,cost;
        mem(arr,0);
        cin>>n>>m>>k;
        FOR(i,n)
            FOR(j,m)
            {
                cin>>arr[i][j];
                arr[i][j] =  arr[i][j] + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];

            }

        FOR(i1,n)
        {
            FOR(j1,m)
            {
                FOR1(i2,i1,n-1)
                {
                    FOR1(j2,j1,m-1)
                    {
                        cost = arr[i2][j2] - arr[i2][j1-1] - arr[i1-1][j2] + arr[i1-1][j1-1];
                        area = ((i2-i1+1)*(j2-j1+1));
                        if(area>=mxarea && cost<=k)
                        {
                            if(area==mxarea)
                                mxcost = min(mxcost,cost);
                            else
                                mxcost = cost;

                            mxarea = area;
                        }

                    }
                }

            }
        }

        cout<<"Case #"<<tc++<<": "<<mxarea<<" "<<mxcost<<"\n";
    }


    return 0;
}
