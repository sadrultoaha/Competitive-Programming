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
map<string,int>lii;
string li[10];
int wa[10];
int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;
#endif
    int n,f=0;
    while(cin>>n)
    {
        mem(li,0);
        mem(wa,0);
        lii.clear();
        if(f>0)cout<<"\n";
        string st;
        FOR(i,n){cin>>st;li[i]=st;lii[st]=i;}
        int x,v,given=0;
        FOR(i,n)
        {
            string stt;
            cin>>stt>>v>>x;
            if(x>0) given=v/x;
            dbg(st,stt)
            wa[lii[stt]]-=given*x;

            FOR(j,x)
            {
                string sttt;
                cin>>sttt;
                wa[lii[sttt]]+=given;
            }
        }
        FOR(i,n){cout<<li[i]<<" "<<wa[i]<<"\n";}
        f=1;
    }
}


