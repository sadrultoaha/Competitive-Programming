 /**
    author: SadrulToaha
    status: AC
    pType : Easy
    sTime : 22.03.2018 - 6:25
    eTime : 23.03.2018 -1:42
    LS    : corner cases,problem Understanding,Faulty Algorithm,Code arrangement.
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
    #define cpp_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
    #define For(i,N) FOR(i,N)
    #define Forr(i,a,b) FORR(i,a,b)
    #define Fotr(i,a,b,c) FOTR(i,a,b,c)
    #define FOR(i,N) FORR(i, 0, N)
    #define FORR(i,a,b) FOTR(i, a, b, 1)
    #define FOTR(i,a,b,c) for(int i=(a);i<(b);i+=(c))
    #define FOREACH(i,x) for(__typeof__((x).begin())i=(x).begin();i!=(x).end();i++)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()
     using namespace std;
//.........................................

int main()
{
    ll N,B,H,W,P,A,sit,am,mI;
    in;
    out;
    while(cin>>N>>B>>H>>W)
    {
        mI=inf;
        while(H--)
        {
            cin>>P;
            sit=0;
            for(int i=0;i<W;i++){
                cin>>A;
                if(A>=N) {sit=1;}
            }
            if(sit==1){am=P*N; if(am < mI && am <= B) mI=am;}
        }
        if(mI!=inf)cout<<mI<<endl;
        else cout<<"stay home"<<endl;

    }
return 0;
}
