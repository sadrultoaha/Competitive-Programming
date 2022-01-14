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

    int n,ar[3000],ev=0,od=0,rest=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]%2==0)ev++;
        else od++;
    }
    sort(ar,ar+n);
    rest=abs(od-ev);
    int j=0,sum=0;

    while(rest>1)
    {
        if(od>ev && ar[j]%2!=0){sum+=ar[j];rest--;}
        else if(od<ev && ar[j]%2==0){sum+=ar[j];rest--;}
        j++;
    }
    cout<<sum<<"\n";

}

