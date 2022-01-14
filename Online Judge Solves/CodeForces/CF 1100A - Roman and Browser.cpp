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
    int n,k,x,mod=0,sum=0,c=0,ar[200];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
       if(c%k==0){ar[i]=0;c=0;}
       sum+=ar[i];
       c++;
    }

    cout<<mod<<" "<<sum;

/// naive approach
//    int n,k,ar[200],fb=0,cf=0,ans=0,dk;
//    cin>>n>>k;
//    dk=k;
//    for(int i=0;i<n;i++)
//    {
//        cin>>ar[i];
//        if(ar[i]==-1)fb++;
//        else if(ar[i]==1)cf++;
//    }
//    int mid=0;
//    while(mid<n)
//    {
//
//       int f=fb,c=cf;
//       k=dk;
//       for(int i=mid;i>=0;i=i+k)
//       {
//            if(ar[i]==-1)f--;
//            if(ar[i]==1) c--;
//            if(i+k>=n){i=mid;k=-k;}
//       }
//       ans=max(ans,abs(c-f));
//       mid++;
//    }
//    cout<<ans<<endl;

return 0;
}
