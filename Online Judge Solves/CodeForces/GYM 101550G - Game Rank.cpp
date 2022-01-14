/**
    author: SadrulToaha
    status:
    pType : Easy Implement,Tricky Description.
    sTime : 23.03.2018 - 2:20
    eTime :23.03.2018 - 3.10
    LS    : Practice
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
    #define pll             pair<ll,ll>
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

///************************ End of Template ******************************///

int main()
{
    string S;
    int i=0,Rank=25,Stars=0,l,HBonus=0,H=0,c=0;

    cin>>S;
    l=S.size();
    while(l>0)
    {
        if(S[i]=='W')
        {
            H++;
            Stars++;
        }
        else
        {
            H=0;
            if(Stars>0 && Rank<=20 && Rank>=1)
            {
                Stars--;
            }
            else if(Stars==0 && (Rank<=20 && Rank>=1))
            {
                if(Rank==20)
                {
                    Stars=0;
                }
                else
                {
                    Rank++;
                    if(Rank<=25 && Rank >=21)Stars=1;
                    if(Rank<=20 && Rank >=16)Stars=2;
                    if(Rank<=15 && Rank >=11)Stars=3;
                    if(Rank<=10 && Rank >=1)Stars=4;
                }
            }
        }

        if(H>=3 && (Rank<=25 && Rank>=6))Stars++;

        if(Rank<=25 && Rank >=21)
        {
            if(Stars>2){Rank--;
                    Stars-=2;}
        }
        if(Rank<=20 && Rank >=16)
        {
            if(Stars>3){Rank--;
                Stars-=3;}
        }
        if(Rank<=15 && Rank >=11)
        {
            if(Stars>4){Rank--;
                Stars-=4;}
        }
        if(Rank<=10 && Rank >=1)
        {
            if(Stars>5){Rank--;
                Stars-=5;}
        }
        if(Rank<1)
        {
            Rank=0;
            Stars=-1;
        }

        i++;
        l--;
    }
    if(Rank>=1 && Rank<=25)cout<<Rank;
    else if(Rank==0) cout<<"Legend";
return 0;
}
