/**
    author: SadrulToaha
    status:
**/

#include<bits/stdc++.h>
using namespace std;

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
    #define SCNLL(x)        scanf("%llu",&x)
    #define SCN2LL(x,y)     scanf("%llu %llu",&x,&y)
    #define SCND(x)         scanf("%lf",&x)
    #define SCN64(x)        scanf("%I64"&x)

    #define PRNI(x)         printf("%d",x);
    #define PRNLL(x)        printf("%lld",x);
    #define PRND(x)         printf("%lf",x);
    #define PRN64(x)        printf("%I64",x);



/****************************************** END *****************************************/
ULL len(ULL q)
{
   ULL cnt=0,leng=1;
    while(q>0)
    {
        cnt++;
        q=q/2;
    }
    return cnt;
}

ULL sum(ULL L,ULL R,ULL ln)
{
    ULL BIT=(1ULL<<(ln-1)),B=(R-BIT+1)%4;
    if(L<BIT)
    {
        if(B==1)
            return R^(sum(L,BIT-1,ln-1)*2);
        else if(B==2)
            return 1^(sum(L,BIT-1,ln-1)*2);
        else if(B==3)
            return R^1^(sum(L,BIT-1,ln-1)*2);
        else
            return (sum(L,BIT-1,ln-1)*2);

    }
    else
    {

        if(L==R)return L;
        ULL OK=0;
        if(L & 1 == 1)
        {
            OK=L;
            L++;
        }
        ULL A=(R-L+1)%4;
        if(A==1) return OK ^ R;
        else
            if(A==2) return OK ^ 1;
        else
            if(A==3) return OK ^ R^1;
        else
            return OK;
    }
}

int main()
{
    ULL T,cs=0;
//IN;
    SCNLL(T);
    while(T--)
    {
        ULL p,q,l=0,BIN;
        cs++;
        SCN2LL(p,q);
        l=len(q);
        BIN=sum(p,q,l);
        printf("Case %llu: %llu\n",cs,BIN);
    }

return 0;
}
