
/**
    author: SadrulToaha
    status:
    pType :
    sTime : 01.05.2018 - 11:30
    eTime :
    LS    :
**/

    #include<bits/stdc++.h>

    #define in freopen("IN.txt","r",stdin)
    #define out freopen("OT.txt","w",stdout)
    #define eps             1e-8
    #define inf             2e18
    #define ll              long long
    #define ull             unsigned long long
    #define PI              acos(-1.0)
    #define pb              push_back
    #define mkpr              make_pair
    #define mpii            map<int,int>
    #define mpcc            map<char,char>
    #define vci             vector<int>
    #define vcll            vector<long long>
    #define pii             pair<int,int>
    #define pLL             pair<ll,ll>
    #define sq(x)           ((x)*(x))
    #define cb(x)           ((x)*(x)*(x))
    #define sqR(x)          sqrt(x)
    #define pw(x,y)         pow(x,y)
    #define mn(x,y)         min(x,y)
    #define mn3(x,y,z)      min(x,min(y,z))
    #define mn4(w,x,y,z)    min(min(w,x),min(y,z))
    #define mx(x,y)         max(x,y)
    #define mx3(x,y,z)      max(x,max(y,z))
    #define mx4(w,x,y,z)    max(max(w,x),max(y,z))
    #define scni(x)         scanf("%d",&x)
    #define scnll(x)        scanf("%lld",&x)
    #define scnf(x)         scanf("%f",&x)
    #define scnd(x)         scanf("%lf",&x)
    //#define scn64(x)        scanf("%I64",&x)
    #define prni(x)         printf("%d",x);
    #define prnll(x)        printf("%lld",x);
    #define prnf(x)         printf("%f",x);
    #define prnd(x)         printf("%lf",x);
    //#define prn64(x)         printf("%d",x);
    #define For(i,N) for(int i=0;i<(N);i++)
    #define RFor(i,N) for(int i=(N);i>0;i--)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()


     using namespace std;

/******************************************* END ******************************************/
/*int isPrime(int x)
{
    if(x <= 1)return 0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)return 0;
    }
    return 1;
}*/

int isPrime(int n)
{
    if(n<=1)return 0;
    int y;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++){
       if (prime[p])
       {
        if(p==n){y=1;break;}
        else {y=0;}
     }
    }
    return y;
}
int orderedPair(int N)
{
    int p,q,c=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((i+2*j)==N)
            {
                if(i>j && isPrime(i)&&isPrime(j))
                {
                    c++;
                    //cout<<i<<","<<j<<endl;
                }
            }
        }
    }
    return c;

}


int main()
{
    int T,N,x;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        x=N;
        cout<<orderedPair(N)<<endl;

    }


return 0;
}

