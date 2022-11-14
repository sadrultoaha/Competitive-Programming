
#include<bits/stdc++.h>
using namespace std;

#define in freopen("in.txt","r",stdin)
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

int chckone(int x)
{
    int cnt = 0;
    while(x)
    {
        int n = x%10;
        if(n==1)cnt++;
        x /= 10;
    }
    return cnt;
}

int main()
{
    fastio;
#ifdef AadhareAlo
    //in;
    //out;
#endif
    int n,one=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       if(chckone(i))one++;
    }
    cout<<one<<"\n";
return 0;
}


