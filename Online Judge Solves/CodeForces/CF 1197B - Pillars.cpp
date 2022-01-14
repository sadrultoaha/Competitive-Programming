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

    int m,ar[200005],mi=0;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        if(ar[i]==m){mi=i;}
    }

    for(int i=mi-1;i>0;i--)
    {
        if(ar[i-1] > ar[i]){cout<<"NO\n";return 0;}
    }
    for(int i=mi+1;i<m-1;i++)
    {
        if(ar[i+1]>ar[i]){cout<<"NO\n";return 0;}
    }

    cout<<"YES\n";
}

