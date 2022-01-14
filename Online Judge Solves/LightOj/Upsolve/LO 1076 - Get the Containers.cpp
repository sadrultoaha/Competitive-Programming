/**
    author:
    status:
    pType :
    sTime : ?.03.2018 - ?:?
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
    #define For(i,N) for(int i=1;i<=(N);i++)
    #define RFor(i,N) for(int i=(N);i>0;i--)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()




     using namespace std;

/******************************************* END ******************************************/

int V[1000+10],C[1000000+10];
int maxcon(int V[],int N,int M)
{
    int m=M,mx=0,x=1;
    For(i,m)
    {
        C[i]=0;
    }
    if(N>m)
    {
        For(i,N)
        {
           if(x<M)
           {

                if(V[i-1]<=V[i])
                {
                    V[i]=V[i-1]+V[i];
                }
                else
                {
                   C[x]=V[i-1];
                   x++;
                }
           }
            if(x==M)
            {
                C[x]+=V[i];
            }
        }
    }
    else if(N<=M)
    {
         For(i,m)
        {
            C[i]=V[i];
        }
    }

     For(k,m)
    {
        if(C[k]>mx)mx=C[k];
    }
    return mx;


}

int main()
{
    int T,N,M,cs=1;
    in;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        For(i,N)
        {
            cin>>V[i];
        }
        cout<<"Case "<<cs<<": "<<maxcon(V,N,M);
        cout<<endl;
        cs++;
    }

return 0;
}

