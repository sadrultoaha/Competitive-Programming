/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define IN freopen("IN.txt","r",stdin)
#define OUT freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
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

bool iscube(int n) {
    int root =(round(cbrt(n)));
    return n == root * root * root;
}

int deno[30],Size[10010];
ll dp[30][10010];
void doDden(int x)
{
    int i=1,j=0;
    while(i<=x)
    {
        if(iscube(i)){deno[j]=i;j++;}
        Size[i]=j;
        i++;
    }
}
ll dpCoin(int coins,int value)
{
    if (value == 0)return 1;
    if (value < 0)return 0;
    if(coins <=0 && value >= 1)return 0;
    if(dp[coins][value]==-1)dp[coins][value]= dpCoin(coins - 1, value) + dpCoin(coins, value-deno[coins-1]);
    return dp[coins][value];
}

int main()
{
    doDden(10000);
    int value;
    while(cin>>value)
    {
        MEM(dp,-1);
        int sz=Size[value];
        cout<<dpCoin(sz,value)<<"\n";
    }
}
