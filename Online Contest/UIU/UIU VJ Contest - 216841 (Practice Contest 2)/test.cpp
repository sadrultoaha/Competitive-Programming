#include<stdio.h>
int main()
{
    int h,m;
    int H,D,C,N;
    int min=0;
    scanf("%d%d",&h,&m);
    scanf("%d%d%d%d",&H,&D,&C,&N);
    if(h<20)
    {
        min=((20-h)*60)-m;
    }
    double a=(min*D+H+N-1)/N*C*0.8;
    if(a<((H+N-1)/N*C))
    {
        printf("%.4lf",a);
    }
    else
    {
        printf("%.4lf",(H+N-1)/N*C);
    }
    return 0;
}
