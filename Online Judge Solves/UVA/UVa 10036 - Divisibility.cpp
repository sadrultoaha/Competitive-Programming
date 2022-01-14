/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define IN freopen("in.txt","r",stdin)
#define OUT freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)    memset(a,b,sizeof(a))
#define ll long long
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
int ans[10010][101];
int divis(int n,int k,int num[])
{
    ans[0][0]=1;
    int idx;
    for(idx=0;idx<n;idx++)
    {
        for(int val=0;val<k;val++)
        {
            if(ans[idx][val])
            {
                int x = (val+num[idx])%k;
                ans[idx+1][x]=1;
                int y = (val-num[idx]+k)%k;
                ans[idx+1][y]=1;
            }
        }

    }
    return ans[idx][0];

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,num[10010];
        MEM(ans,0);
        cin>>n>>k;
        for(int i=0;i<n;i++) {cin>>num[i];num[i]%=k;if (num[i]< 0){num[i]+=k;}}
        if(divis(n,k,num))cout<<"Divisible"<<"\n";
        else cout<<"Not divisible"<<"\n";
    }

}

