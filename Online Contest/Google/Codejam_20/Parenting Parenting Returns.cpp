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
bool sortit(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
char tggl(char i)
{
    if (i=='C')return 'J';
    else return 'C';
}
int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif
    int T,cs=1;
    cin>>T;
    while(T--)
    {
        int n,x,y;
        vector<pii>vc;
        vector<int>cpy;
        vector<pair<int,char>>tr;
        cin>>n;
        FOR(i,n)
        {
            cin>>x>>y;
            vc.pb(mp(x,y));
            cpy.pb(x+y);
        }
        sort(all(vc),sortit);
        int ov=0;
        vc.pb(mp(0,0));
        char ans [1005];
        mem(ans,0);
        tr.pb(mp(vc[0].ft+vc[0].sd,'C'));
        FOR(j,n)
        {

            if(vc[j].sd>vc[j+1].ft)tr.pb(mp(vc[j+1].ft+vc[j+1].sd,tggl(tr[j].sd)));
            else tr.pb(mp(vc[j+1].ft+vc[j+1].sd,tr[j].sd));
            if(ov<2)
            {   ov=0;
                FOR1(k,j+1,n-1)
                {
                    if(vc[j].sd>vc[k].ft)ov++;
                    else ov=0;
                    if(ov>1)break;
                }
            }

        }
        FOR(p,n)
        {
            FOR(q,n)
            {
                if(cpy[q]==tr[p].ft && ans[q]=='\0'){ans[q]=tr[p].sd;}
            }
        }
        if(ov>1)cout<<"Case #"<<cs++<<": IMPOSSIBLE";
        else
        {
            cout<<"Case #"<<cs++<<": ";
            FOR(m,n)
            {
                cout<<ans[m];
            }
        }
        cout<<"\n";
    }



return 0;
}

