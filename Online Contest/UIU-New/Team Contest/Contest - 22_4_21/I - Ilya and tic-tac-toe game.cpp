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
/*

x..x
x.oo
....
x..o

*/

int dr[] = {0,1,1,-1,0,-1,-1,1};
int dc[] = {1,0,1,1,-1,0,-1,-1};
char field[4][4];
int dt=0;
int tour(int r, int c, char c1, char c2,int d)
{
    if(r<0 || r>3 || c<0 || c>3)return 0;
    if(field[r][c]==c2){dt++;if(dt>1)return 0;}
    else if(field[r][c]!=c1)return 0;
    int ans = 1;
    ans+=tour(r+dr[d],c+dc[d],c1,c2,d);
    return ans;
}

int main()
{
    fastread;
#ifdef UIU_OLT_V2
    read;
    //write;
#endif

    FOR(i,4)
        FOR(j,4)
            cin>>field[i][j];

    int y=0;
    FOR(i,4)
    {
        FOR(j,4)
        {
            FOR(k,4)
            {
                if(tour(i,j,'x','.',k) == 3){y=1;break;}
                dt=0;
            }
            if(y)break;
        }
        if(y)break;
    }

    if(y)cout<<"YES\n";
    else cout<<"NO\n";

return 0;
}

