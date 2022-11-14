#include<bits/stdc++.h>
using namespace std;

#define in freopen("overcode.in","r",stdin)
#define out freopen("out.txt","w",stdout)
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define INF             2e16
#define ll              long long
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()
#define FOR(i,N) for(int i=0;i<N;i++)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)

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
    fastio;
    in;
#ifdef AadhareAlo
    //out;
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[510],br[510];
        cin>>n;
        FOR(i,n)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int j=0,l=5;
        for(int i=0;l<n;)
        {
            if((ar[i]-ar[i+5])<=1000){j++;i++;l+=6;}
            else {i++;l++;}
        }
        cout<<j<<"\n";
    }
return 0;
}


