#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
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
vector<int>li(10000);
int main()
{
    fastread;
#ifdef SunWalker
    read;
    //write;
#endif

    int cou,cat,x;
    while(cin>>cou>>cat)
    {
        if(cou==0)return 0;
        int ok = 1;
        fill(all(li),0);
        FOR(i,cou)
            cin>>x,li[x]++;

        int ca,req,y;
        FOR(i,cat)
        {
            cin>>ca>>req;
            FOR(j,ca)
            {
                cin>>y;
                if(req>0)
                    if(li[y]==1)req--;
            }
            if(req>0)ok=0;
        }
        ok? cout<<"yes\n" :  cout<<"no\n";
    }

    return 0;

}


