
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
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
#define rall(x) x.rbegin(), x.rend()


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

    int t,cs=1;
    cin>>t;
    while(t--)
    {
        vector< pair<int,char> >vc;
        vector< pair<int,char> >ans;
        int c,m,y,k,minC=INT_MAX,minM=INT_MAX,minY=INT_MAX,minK=INT_MAX,totInc = 1e6;
        int ansC=0,ansM=0,ansY=0,ansK=0;
        FOR(i,3)
        {
            cin>>c>>m>>y>>k;
            minC = min(minC,c);
            minM = min(minM,m);
            minY = min(minY,y);
            minK = min(minK,k);
        }

        vc.pb(mp(minC,'c'));
        vc.pb(mp(minM,'m'));
        vc.pb(mp(minY,'y'));
        vc.pb(mp(minK,'k'));

        sort(rall(vc));
        int i=0;
        while(totInc>0 && i<=3)
        {
            if(vc[i].ft <= totInc)
            {
                ans.pb(mp(vc[i].ft,vc[i].sd));
                totInc -= vc[i].ft;
            }
            else
            {
               ans.pb(mp(totInc,vc[i].sd));
               totInc = 0;
            }

            i++;
        }
        cout<<"Case #"<<cs++<<": ";
        if(totInc!=0) {cout<<"IMPOSSIBLE\n"; continue;}
        int tot = 0;
        for(auto it: ans)
        {
            if(it.sd=='c')ansC = it.ft;
            else if(it.sd=='m')ansM = it.ft;
            else if(it.sd=='y')ansY = it.ft;
            else if(it.sd=='k')ansK = it.ft;
        }


        cout<<ansC<<" "<<ansM<<" "<<ansY<<" "<<ansK<<"\n";

    }
}
