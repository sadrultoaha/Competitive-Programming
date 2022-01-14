#include<stdio.h>

int main()
{
    int n,k,i,j,Count=0;
    int A[100];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=1;j<=n;j++)
    {
        if(A[j]>=A[k] && A[j]!=0)
        {
            Count++;
        }
    }
    printf("%d\n",Count);
}
