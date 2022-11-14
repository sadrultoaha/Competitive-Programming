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



#define MAX 201

int dp[MAX][MAX], path[MAX][MAX],N;

int solve(int i,int j)
{
    int p1=0,p2=0,p3=0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(i>=2*N || (j>=N && i<N) || (j>=N-1 && i>=N) || j<0)
        return 0;

    if(i<N-1)
        p1=max(p1,path[i][j] + solve(i+1,j+1));
    else if(i>=N-1)
        p2=max(p2,path[i][j] + solve(i+1,j-1));

    p3=max(p3,path[i][j] + solve(i+1,j));
    return dp[i][j] =  max(p1,max(p2,p3));
}

int main()
{
    fastread;
#ifdef UIU_OLT_V2
    //read;
    //write;
#endif

    int T,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>N;
        mem(dp,-1);
        mem(path,0);
        int l = (2*N)-2, k = N-1;

        FOR(i,N)
            FOR(j,(i+1))
                cin>>path[i][j];

        FOR1(i,N,l){
            FOR(j,k)
                cin>>path[i][j];
            k--;
        }


        cout<<"Case "<<cs++<<": "<<solve(0,0)<<"\n";
    }

}

