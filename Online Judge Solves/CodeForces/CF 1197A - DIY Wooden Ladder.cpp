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

    int T;
    cin>>T;
    while(T--)
    {
        int a[100005],n,N=2,k=0;
        cin>>n;
        N=n;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int b1=a[N-2],b2=a[N-1];
        if(b2 <1 || b1<1){cout<<"0\n";continue;}
        for(int i=0;i<n-2;i++)
        {
            if(a[i]>=1)k++;
            if(b1 < k+1 || b2 < k+1)k--;
        }
        if(k<0)k=0;

        cout<<k<<"\n";
    }

}

