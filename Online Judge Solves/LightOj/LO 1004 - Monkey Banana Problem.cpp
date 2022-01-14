
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
#define MAX 201
#define cpp_io() {ios_base::sync_with_stdio(false);cin.tie(0);}
int dp[MAX][MAX], P[MAX][MAX],N;

int tour(int i,int j)
{
    if(dp[i][j]!=-1)return dp[i][j];
    if(i>=2*N || (j>=N && i<N) || (j>=N-1 && i>=N) || j<0)return 0;
    int p1=0,p2=0,p3=0;
    if(i<N-1)
    p1=max(p1,P[i][j]+tour(i+1,j+1));
    else if(i>=N-1)
    p2=max(p2,P[i][j]+tour(i+1,j-1));
    p3=max(p3,P[i][j]+tour(i+1,j));
    return dp[i][j]=  max(p1,max(p2,p3));
}
int main()
{
    cpp_io()
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        int R=2*N-1;
        memset(P,0,sizeof(P));
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>P[i][j];
            }
        }
        int k=N-1;
        for(int i=N;i<2*N-1;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>P[i][j];
            }
            k--;
        }
        printf("Case %d: %d\n",i,tour(0,0));
    }


}
