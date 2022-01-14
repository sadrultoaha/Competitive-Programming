#include<bits/stdc++.h>

using namespace std;
#define M 100000
#define inf 1e9
int sum[4*M];
int num[M];
int N,Q,I,J,T,cs=0;

void b(int a, int L, int R)
{
             if(L == R)
             {
                 sum[a]=num[L];
             return;
             }
             int mid = (L + R)/2;
             b(a * 2, L, mid);
             b(a * 2 + 1, mid + 1, R);
             sum[a]=min(sum[a*2],sum[a * 2 + 1]);
             return;
 }



 int q(int a, int L, int R, int l, int r)
{
             if(r < L || R < l) return inf;
             if(L >= l && R <= r) return sum[a];

             int mid = (L + R)/2;
             int x=q(a * 2, L, mid, l, r);
             int y=q(a * 2 + 1, mid + 1, R, l, r);
             return min(x,y);
 }

int main()
{

    scanf("%d",&T);
    while(T--)
    {
         cs++;
         scanf("%d %d",&N,&Q);
         for(int i=1;i<=N;i++)
         {
            scanf("%d",num+i);
         }
         b(1,1,N);
         printf("Case %d:\n",cs);
         for(int i=1;i<=Q;i++)
         {
            scanf("%d %d",&I,&J);
            printf("%d\n",q(1,1,N,I,J));
         }
    }

  return 0;
}
