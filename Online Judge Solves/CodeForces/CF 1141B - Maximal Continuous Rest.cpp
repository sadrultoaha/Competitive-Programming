/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;

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
    int n,ar[200005];
    cin>>n;
    int mid=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==0)mid=i;
    }
    int sum=0,mx=0;
    int i=mid+1;
    while(1)
    {
        if(i==n){i=0;}
        if(i==mid)break;
        if(ar[i]==0){sum=0;}
        else sum+=ar[i];
        mx=max(mx,sum);
        i++;
    }
    cout<<mx<<"\n";


}
