/**
    author:SadrulToaha
    status:
    pType :
    sTime : 23.03.2018 - 11:31
    eTime :23.03.2018 - 11:45
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

     using namespace std;

//.........................................

int main()
{
    int cur,des,edge=360,CW,CCW;
    cin>>cur>>des;
    CW=abs(des-cur);
    CCW=cur+(edge-des);
    if(CCW>edge)
    {
        CCW=des+(edge-cur);
        if(CW<CCW)cout<<"-"<<CW;
        else if(CCW<CW)cout<<CCW;
        else if(CW==CCW)cout<<CW;
    }
    else
    {
        if(CW<CCW)cout<<CW;
        else if(CCW<CW)cout<<"-"<<CCW;
        else if(CW==CCW)cout<<CW;
    }
return 0;
}
