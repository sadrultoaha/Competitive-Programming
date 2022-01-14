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
int n,ar[300100],mp[300005];

int main()
{

    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<=9;i++){cin>>mp[i];}
    int f=0,l=0;
    for(int i=1;i<=n;i++)
    {
        int x=mp[ar[i]];
        if(x>ar[i]){if(f==0)f=i; l=i;}
        else {vc.push_back(make_pair(f,l));f=0;l=0;}
        if(i==n){vc.push_back(make_pair(f,l));f=0;l=0;}
    }
    cout<<str<<endl;
}


