/**
    author: SadrulToaha
    status:
**/

#include<bits/stdc++.h>
using namespace std;

/****** Type Define *********/


    typedef long long LL;
    typedef unsigned long long ULL;
    typedef long double          LD;

    typedef vector<int>        VCI;
    typedef vector<LL>         VCLL;
    typedef vector<double>     VCD;
    typedef vector<string>     VCS;
    typedef vector< VCI >       VCVCI;
    typedef vector< VCD >       VCVCD;

    typedef map<int,int>       MPII;
    typedef map<char,char>     MPCC;
    typedef map<char,int>      MPCI;

    typedef set<int>           STI;
    typedef multiset<int>      MSTI;

    typedef pair<int,int>      PRII;
    typedef pair<int,char>     PRIC;
    typedef pair<LL,LL>        PRLL;



/****** STL Commands *********/

    #define PB              push_back
    #define POB             pop_back
    #define MKPR            make_pair
    #define CLR(a)          memset(a,0,sizeof(a))
    #define SET(a)          memset(a,-1,sizeof(a))
    #define ALL(x)          x.begin(), x.end()
    #define RALL(x)         x.end(), x.begin()

/****** Constants *********/

    #define GOLD ((1+sqrt(5))/2)
    #define PI              acos(-1.0)
    #define EPS             1e-9
    #define INF             2e18
    #define MOD 1000000007
    #define MX 1000000

/****** Operations *********/
    #define IN freopen("IN.txt","r",stdin)
    #define OUT freopen("OT.txt","w",stdout)

    #define on(n,pos) (n  (1LL<<(pos)))
    #define off(n,pos)  n & ~(1LL<<pos)
    #define ison(n,pos) (bool)(n & (1LL<<(pos)))

    #define SCNI(x)         scanf("%d",&x)
    #define SCNLL(x)        scanf("%lld",&x)
    #define SCND(x)         scanf("%lf",&x)
    #define SCN64(x)        scanf("%I64"&x)

    #define PRNI(x)         printf("%d",x);
    #define PRNLL(x)        printf("%lld",x);
    #define PRND(x)         printf("%lf",x);
    #define PRN64(x)        printf("%I64",x);



/******************************************* END ******************************************/

int main()
{
    int n,k,plt[101],plts=0,mx=0,dishes=0,totplt=0;
    MPII util;
    MPII :: iterator it;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>plt[i];
        util[plt[i]]++;
    }
    for(it=util.begin();it!=util.end();it++)
    {
        mx=max(mx,it->second);
        plts++;
    }
    //cout<<mx<<" "<<plts;
    dishes=ceil(double(mx)/k);
    //cout<<dishes<<endl;
    totplt=abs((k*dishes*plts)-n);
    cout<<totplt<<endl;
return 0;
}

