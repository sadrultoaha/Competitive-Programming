#include<stdio.h>
#include<math.h>

int main()
{
    __int64 m,n,a;
    __int64 R;

      scanf("%I64d %I64d %I64d",&m,&n,&a);
    R=((m+a-1)/a)*((n+a-1)/a);
    printf("%I64d",R);



    return 0;
}
