/**
    author: SadrulToaha
    status:
**/

#include<bits/stdc++.h>
using namespace std;
#include <ctime>
/***** Type Define ********/


    typedef long long LL;
    typedef unsigned long long ULL;
    typedef long double   	   LD;

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



/***** STL Commands ********/

    #define PB              push_back
    #define POB             pop_back
    #define MKPR            make_pair
    #define CLR(a)          memset(a,0,sizeof(a))
    #define SET(a)          memset(a,-1,sizeof(a))
    #define ALL(x)          x.begin(), x.end()
    #define RALL(x)         x.end(), x.begin()

/***** Constants ********/

    #define GOLD ((1+sqrt(5))/2)
    #define PI              acos(-1.0)
    #define EPS             1e-9
    #define INF             2e18
    #define MOD 1000000007
    #define MX 1000000

/***** Operations ********/
    #define IN freopen("IN.txt","r",stdin)
    #define OUT freopen("OT.txt","w",stdout)

    #define on(n,pos) (n | (1LL<<(pos)))
    #define off(n,pos)  n & ~(1LL<<pos)
    #define ison(n,pos) (bool)(n & (1LL<<(pos)))

    #define SCNI(x)         scanf("%d",&x)
    #define SCNII(x,y)      scanf("%d%d",&x,&y)
    #define SCNLL(x)        scanf("%lld",&x)
    #define SCN2LL(x,y)        scanf("%lld %lld",&x,&y)
    #define SCND(x)         scanf("%lf",&x)
    #define SCN64(x)        scanf("%I64"&x)

    #define PRNI(x)         printf("%d",x);
    #define PRNLL(x)        printf("%lld",x);
    #define PRND(x)         printf("%lf",x);
    #define PRN64(x)        printf("%I64",x);



/****************************************** END *****************************************/

LL resss=0;
string ans;

string DeciToBin(LL q)
{
   string res="";
   LL p=floor(log2(q));
   while(p>=0)
   {
       LL x=pow(2,p);
       if(q>=x){res+=to_string(1);q-=x;}
       else res+=to_string(0);
       p--;
   }
   return res;

}
void sum(LL p,LL q)
{
        LL in=0,num=p+1;
        string ro=DeciToBin(p),ans1=ro,ans2="",result="";
        while(num<=q)
        {
          LL s = 0;
          ans2=DeciToBin(num);
          if(ans1.size()<ans2.size())ans1+="0";
          LL i = ans1.size() - 1, k = ans2.size() - 1;
          while (i >= 0 || k >= 0 || s == 2)
         {
             s ^= ((i >= 0)? ans1[i] - '0': 0);
             s ^= ((k >= 0)? ans2[k] - '0': 0);
            result = char(s % 2 + '0') + result;
            s /= 2;
            i--; k--;
         }
//         cout<<ans1<<"--"<<ans2<<endl;
//         cout<<result<<endl;
         ans1=result;
         result="";
         ans2="";
         num++;
        }
        ans=ans1;


}
void BinToDeci()
{
    resss = bitset<64>(ans).to_ullong();
}


int main()
{
#ifdef LOCAL

#endif


double start_time = clock();
    LL T,cs=0;

    SCNLL(T);
    while(T--)
    {
        LL p,q;
        cs++;
        SCN2LL(p,q);
        sum(p,q);
        BinToDeci();
        cout<<"Case "<<cs<<": "<<resss<<endl;
    }
    double end_time = clock();
	fprintf(stderr, "Time = %lf\n",abs (end_time - start_time) / CLOCKS_PER_SEC);

#ifdef LOCAL

#endif
return 0;
}
