/**
    author: SadrulToaha
    status: AC
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
    /***** Approach 1 *****/

     int n,an=0,da=0;
    string chess;
    cin>>n>>chess;
    for(int i=0;i<n;i++)
    {
        if(chess[i]=='A')an++;
        else da++;
    }

    if(an>da)cout<<"Anton"<<endl;
    else if(da>an)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    /***** Approach 2 *****/
//    int n;
//    string chess;
//    cin>>n>>chess;
//    MPCI win;
//    MPCI :: iterator it;
//    for(int i=0;i<n;i++)
//    {
//        win[chess[i]]++;
//    }
//    int mx=0;
//    char winner;
//    for(it=win.begin();it!=win.end();it++)
//    {
//        if(it->second > mx){mx=it->second;winner=it->first;}
//        else if(it->second == mx) winner='d';
//    }
//    if(winner=='A')cout<<"Anton"<<endl;
//    else if(winner=='D')cout<<"Danik"<<endl;
//    else cout<<"Friendship"<<endl;




return 0;
}

