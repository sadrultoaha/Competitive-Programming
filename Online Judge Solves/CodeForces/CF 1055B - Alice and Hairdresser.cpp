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
    #define SCN2LL(x,y)     scanf("%lld %lld",&x,&y)
    #define SCN3LL(x,y,z)   scanf("%lld %lld %lld",&x,&y,&z)
    #define SCND(x)         scanf("%lf",&x)
    #define SCN64(x)        scanf("%I64"&x)

    #define PRNI(x)         printf("%d",x);
    #define PRNLL(x)        printf("%lld\n",x);
    #define PRND(x)         printf("%lf",x);
    #define PRN64(x)        printf("%I64",x);



/******************************************* END ******************************************/

int main()
{
//#ifndef ONLINE_JUDGE
//        //IN;
//        //OUT;
//        double start_time = clock();
//#endif
//
//
//
//#ifndef ONLINE_JUDGE
//    double end_time = clock();
//    cout<<"Time : "<<(end_time - start_time)/ CLOCKS_PER_SEC;
//#endif

 LL n,q,l,wh,p,d;
    LL HR[100005],mark[100005];
    SCN3LL(n,q,l);
    mark[n]=0;
    LL seg=0;
    for(int i=0;i<n;i++)
    {
        SCNLL(HR[i]);
        if(HR[i]>l)mark[i]=1;
        else mark[i]=0;

    }
    for (int i = 0; i < n; i++) {
        if (mark[i] && !mark[i + 1])
			seg++;
	}

    for(int i=0;i<q;i++)
    {
        SCNLL(wh);
        if(wh==1)
        {
            SCN2LL(p,d);
            p--;
            HR[p]+=d;

            if (HR[p] - d <= l && HR[p] > l)
            {
				mark[p] = 1;
                if (p > 0 && mark[p - 1])
					seg--;
                if (!mark[p + 1])
					seg++;
            }
        }
        else
            PRNLL(seg);
    }

}


