#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
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


int main()
{
    fastread;
#ifdef UIU_OLT_V2
    //read;
    //write;
#endif

    ll n,t;
    cin>>n>>t;
    vector<pair<double,double>>v;
    for(int i=0;i<n;i++){
        double x,a;
        cin>>x>>a;
        v.pb({x,a});
    }
    sort(all(v));
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if((v[i].first-v[i-1].first)-((v[i].second+v[i-1].second)/2)>t)cnt+=2;
        else if((v[i].first-v[i-1].first)-((v[i].second+v[i-1].second)/2)==t)cnt++;
    }
    cnt+=2;
    cout<<cnt<<endl;
    return 0;

}

