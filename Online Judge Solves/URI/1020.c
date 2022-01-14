#include<stdio.h>

int main()
{
    int n,y,m,d,x;
    scanf("%d",&n);

    y=n/365;
    x=n-y*365;
    m=x/30;
    d=n-(y*365+m*30);


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}

