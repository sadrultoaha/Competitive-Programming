
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


    int f;
    cin>>f;
    int arr[105];
    map<int,int>mp;
    for(int i=1;i<=f;i++)
    {
        cin>>arr[i];
        int m,x;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>x;
            mp[x]++;
        }
    }
    int c=0,tot=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        tot++;
        for(int i=1;i<=f;i++)
        {
            if(arr[i]==it->first)c++;
        }
    }
    cout<<tot-c<<"\n";

}
