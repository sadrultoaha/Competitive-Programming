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
    //read;
    int T;
    cin>>T;
    for(int cs=1;cs<=T;cs++)
    {
        vector<int>line;
        int n,m,time=0,doi=0,wheel[30],done[30],vis[30][30],cm=0,cur;
        mem(wheel,0);
        mem(vis,0);
        mem(done,0);
        cin>>n>>m;
        for(int i=1;i<=n;i++){line.pb(i);}

        for(int j=1;cm<m;j++)
        {
            time++;
            if(wheel[j]>0)
            {
                if(done[wheel[j]]!=m)
                    line.pb(wheel[j]);
            }
            if(!line.empty())
             {
                int id=0;
                for(auto ix:line)
                {

                   cur=ix;
                   if(vis[j][cur]==0)
                   {
                        wheel[j]=cur;
                        vis[j][cur]=1;
                        done[cur]++;
                        line.erase(line.bn()+id);
                        doi++;
                        break;

                   }
                   id++;
                   wheel[j]=0;
                }
             }
             else if(doi>=n*m) cm++;
             if(j==m)j=0;
        }
        cout<<"Case "<<cs<<": "<<time*5<<"\n";
    }
}

