#include<stdio.h>
int main()
{
    int T,n,i,C1,C2,coun,j;

    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
        scanf("%d",&n);
        C1=n/2;

        C2=n-C1;
        printf("%d %d\n",C1,C2);
    }

return 0;
}
