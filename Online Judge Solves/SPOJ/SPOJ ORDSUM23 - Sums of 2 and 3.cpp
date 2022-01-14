#include<stdio.h>
#define mx 1000000
long long dp[mx+7];
int res(long long N)
{
    long long R;
    if(dp[N]>0) return dp[N];
    if(N==0)return 1;
    if(N<0)return 0;

    return dp[N]=(res(N-2)+res(N-3))%1000000007;
}

int main()
{
    long long T,N,r;
     scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%lld",&N);
        r=res(N);
        printf("%lld\n",r);
    }

}
