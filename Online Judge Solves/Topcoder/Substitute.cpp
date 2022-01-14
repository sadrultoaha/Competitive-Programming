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

class Substitute
{
    public: int getValue(string key, string code)
    {
        string ans;
        for(int i=0;i<code.size();i++)
        {
            size_t found=key.find(code[i]);
            if (found!=string::npos)
            {
            	if(found==9) ans+="0";
            	else ans+=to_string(found+1);
            }
        }
        stringstream geek(ans);
         int tm = 0;
         geek >> tm;
         return tm;
    }
};

int main()
    {

    string k,c;
        cin>>k>>c;
        cout<<Substitute().getValue(k,c)<<endl;

//        string k;
//        cin>>k;
//        string delimiter1 = ",";
//        size_t pos = 0;
//        string tok1="",tok2="";
//        while ((pos = k.find(delimiter1))!= string::npos)
//            {
//             tok1 = k.substr(0,pos+delimiter1.length()-1);
//             tok2 = k.substr(pos+1,k.size());
//             k.erase(0,pos+delimiter1.length());
//            }
//        cout<<Substitute().getValue(tok1,tok2)<<endl;
    return 0;
    }
