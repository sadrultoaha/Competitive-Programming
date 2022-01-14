#include<stdio.h>

int main()
{
    int n,s,m,h,x;
    scanf("%d",&n);

    h=n/3600;
    x=n-h*3600;
    m=x/60;
    s=n-(h*3600+m*60);


    printf("%d:%d:%d\n",h,m,s);

    return 0;
}

