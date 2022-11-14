
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

    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c[60],o[60];
        ll stp = 0;
        ll mc=INF,mo=INF;
        FOR(i,n)
        {
            cin>>c[i];
            mc = min(mc,c[i]);
        }
        FOR(i,n)
        {
            cin>>o[i];
            mo = min(mo,o[i]);
        }
        ll i=0,dif;
        while(1)
        {
            dif = min(abs(c[i]-mc),abs(o[i]-mo));
            if(c[i]!=mc && o[i]!=mo){stp+=dif;c[i]-=dif;o[i]-=dif;}
            else if(c[i]!=mc){stp+=abs(c[i]-mc);c[i]-=abs(c[i]-mc);}
            else if(o[i]!=mo){stp+=abs(o[i]-mo);o[i]-=abs(o[i]-mo);}
            else i++;
            if(i==n)break;
        }
        cout<<stp<<"\n";
    }



return 0;
}

