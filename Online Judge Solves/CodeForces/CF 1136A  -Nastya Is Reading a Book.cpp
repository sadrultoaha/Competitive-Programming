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
    typedef vector< VCI >      VCVCI;
    typedef vector< VCD >      VCVCD;

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
    #define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
    /// scanf ("%[^\n]%*c", str); /// get string with space
    // getline (cin, str); // gets string with space but has some issue with many test case

    /** convert string into number -->
         stringstream geek(token);
         int tm = -1;
         geek >> tm;
    **/
    /** takes string input except delimiter

    string delimiter1 = "{";
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter1))!= string::npos)
        {
         token = str.substr(0, pos);
         str.erase(0,pos + 1);
         stringstream geek(token);
         int tm = -1;
         geek >> tm;
        if(tm!=-1){cout<<tm<<" ";}
        }
    **/




/**   NOTES

    A.MEMSET:
        1. If We Memset an Array with -1/0 the Array will be assigned with -1/0 from idx (0-n), but if we Memset it with " >0 / <-1 " it will be assigned with INF value from idx (0-n)
        BUT negative idx will be always 0 [ Caution negative idx always gives Run Time Error.]
        2.If we Memset Array with " >0 / <-1 then for doing array[i] comparison we must initialize the array[0]=0;

**/

/******************************************* END ******************************************/






int main()
{
    int ar[1000],n;
    cin>>n;
    int x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        ar[i]=y;
    }
    cin>>z;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<z)cnt++;
    }
    cout<<n-cnt<<"\n";
return 0;
}



