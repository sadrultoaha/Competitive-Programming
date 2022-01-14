/**
    author: SadrulToaha
    status: AC
    pType : Greedy Sorting
    sTime : 18.03.2018 - 1:00
    eTime : 19.03.208  - 14:50
    LS    : minimum step sorting by swap
**/

    #include<bits/stdc++.h>
    using namespace std;

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

/******************************************* END ******************************************/

int ar[101];
int main()
{
    int T,n,mn,c=0,cs=1,mi;
    cin>>T;
    while(T--)
    {
        cin>>n;
        For(i,n)
        {
            cin>>ar[i];
        }
        sort(br,br+n);
        for(int i=0;i<n-1;i++){
            int j=i+1;
            mn=ar[i];
            while(1)
            {
                if(ar[j]<mn){
                mn=ar[j];
                mi=j;
                }
                if(j==n-1)break;
                j++;
            }
             if(mi>i)
            {
                swap(ar[i],ar[mi]);
                c++;
                mi=0;
            }
        }
        cout<<"Case "<<cs<<": "<<c<<endl;
        c=0;
        cs++;
    }
return 0;
}

