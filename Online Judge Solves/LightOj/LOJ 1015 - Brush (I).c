#include<stdio.h>

int main()
{
    int T,N,S,TO=0,i,j,k;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(k=1;k<=N;k++)
        {
            scanf("%d",&S);
            if(S<0)
            {
                S=0;
                TO=TO+S;
            }
            else TO=TO+S;

        }
        printf("Case %d: %d\n",i,TO);
        TO=0;
    }
   return 0;
}
