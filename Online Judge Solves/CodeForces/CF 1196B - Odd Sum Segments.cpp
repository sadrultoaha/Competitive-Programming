

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

    int q;
    cin>>q;
    while(q--)
    {
        long long n,k,ar[200010];
        cin>>n>>k;
        long long hse=0;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            if((ar[i]&1))hse++;
        }

        if((hse<k) || hse%2 != k%2 )
        {cout<<"NO\n";continue;}

         cout<<"YES\n";

            int r[k+1],ck=1,sm=ar[1];
            for(int i=1;(i<=n && ck<=k);i++)
            {

                if(sm&1){r[ck]=i;sm=ar[i+1];if(ck==k){break;}ck++;}
                else if(!(sm&1)){sm+=ar[i+1];}
            }
            r[ck]=n;
            for(int i=1;i<=ck;i++)cout<<r[i]<<" ";
            cout<<"\n";
            continue;
    }

}

