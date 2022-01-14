
/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))

#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " ";
        call(++it, rest...);
    }
};

int main()
{
    int n,ar[200];
    cin>>n;
    if(n==2)
    {
        int a,b;
        cin>>a>>b;
        int cn=0,mx=0,mn=10000;
        mx=max(a,b);
        mn=min(a,b);
        while(mx!=mn)
        {
            if(cn>110){cout<<"-1\n";return 0;}
            mx--;
            mn++;
            cn++;
        }
        cout<<cn<<"\n";
        return 0;
    }
    else if(n==1){cout<<"0\n";return 0;}
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     sort(ar,ar+n);
     int dif=0,ans=0;
     for(int i=0;i<n-1;i++)
    {
        if(abs(ar[i]-ar[i+1])==0)continue;
        else if (abs(ar[i] - ar[i+1])!= dif && dif !=0){cout<<"-1\n";return 0;}
        dif=max(dif,abs(ar[i]-ar[i+1]));

    }
    cout<<dif<<"\n";


}
