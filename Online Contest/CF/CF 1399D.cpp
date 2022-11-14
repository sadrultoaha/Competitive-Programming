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

    // First Solve Than Do code
    // Think Wisely not lazily
    // You can solve all in 2 hrs
#endif




    return 0;

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n>>s;
        int nSec[n];
        vector<int>idxZero,idxOne;
        int minSub = 0;
        FOR(i,n)
        {
            if(s[i]=='0')
            {
                if(idxOne.empty())nSec[i]=++minSub;
                else {nSec[i]=nSec[idxOne.back()];idxOne.pop_back();}
                idxZero.pb(i);
            }
            else
            {
                if(idxZero.empty())nSec[i]=++minSub;
                else {nSec[i]=nSec[idxZero.back()];idxZero.pop_back();}
                idxOne.pb(i);
            }
        }
        cout<<minSub<<"\n";
        FOR(i,n)
        {
            cout<<nSec[i]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}


