
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
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

int toru[170][170];
int main()
{
#ifdef SunWalker
    //read;
    //write;

    // Take Few Deep Breath
    // First Solve Than Do Code
    // Think Wisely Not Lazily
    // You Can Solve All In 2 Hrs
#endif
fastread;
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=-INF;
        cin>>n;
        FOR(i,n){
            FOR(j,n)
            {
                cin>>toru[i][j];
                toru[n+i][j] = toru[i][j];
                toru[i][n+j] = toru[i][j];
                toru[n+i][n+j] = toru[i][j];
            }
        }
        FOR(i,2*n){
            FOR(j,2*n)
            {
                    toru[i][j]= toru[i][j] + toru[i-1][j] + toru[i][j-1] - toru[i-1][j-1];
            }
        }
        int sumM = 0;

        FOR(i1,n)
        {
            FOR(j1,n)
            {

                FOR1(i2,i1,i1+n-1)
                {
                    FOR1(j2,j1,j1+n-1)
                    {
                        sumM = toru[i2][j2] - toru[i1-1][j2] - toru[i2][j1-1] + toru[i1-1][j1-1];
                        mx = max(mx,sumM);
                    }
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;

}
/*
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
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

int toru[170][170];
int main()
{
#ifdef SunWalker
    //read;
    //write;

    // Take Few Deep Breath
    // First Solve Than Do Code
    // Think Wisely Not Lazily
    // You Can Solve All In 2 Hrs
#endif
fastread;
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=-INF,sum[170],tm;
        cin>>n;
        FOR(i,n){
            FOR(j,n)
            {
                cin>>toru[i][j];
                toru[n+i][j] = toru[i][n+j] = toru[n+i][n+j] = toru[i][j];
            }
        }
        int j1=0;
        FOR(i1,n)
        {
            FOR(j1,n)
            {
                mem(sum,0);
                FOR1(i2,i1,i1+n-1)
                {
                    tm = 0;
                    FOR1(j2,j1,j1+n-1)
                    {
                        sum[j2] += toru[i2][j2];
                        tm += sum[j2];
                        mx = max(mx,tm);
                    }
                }
            }
        }
        cout<<mx<<"\n";
    }
    return 0;

}
*/
