
/**
    author: SadrulToaha
    status: WA
    pType :
    sTime : 10.03.2018
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
    #define mkpr            make_pair
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
    #define scn64(x)        scanf("%I64",&x)
    #define prni(x)         printf("%d",x);
    #define prnll(x)        printf("%lld",x);
    #define prnf(x)         printf("%f",x);
    #define prnd(x)         printf("%lf",x);
    #define prn64(x)         printf("%d",x);
    #define For(a,N) for(int i=a;i<(N);i++)
    #define RFor(N,a) for(int i=(N);i>a;i--)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()
     using namespace std;

/******************************************* END ******************************************/

int main()
{
    int n,s,t,a[100009],c=0;

    cin>>n>>s>>t;
    if(s==t){cout<<"0"<<endl; return 0;}

    For(0,n)
    {
        cin>>a[i];
        if(a[0]!=s){cout<<"-1"<<endl; return 0;}
    }

    For(0,n)
    {
        if(a[n-1]!=t){cout<<"-1"<<endl;return 0;}
        else
        {
            if(a[i]!=s)c++;
        }
    }
    cout<<c<<endl;
}
