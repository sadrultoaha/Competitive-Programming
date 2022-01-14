#include<stdio.h>
int main()
{

    double a,b,c,A=2,B=3,C=5,MEDIA;
    scanf("%lf %lf %lf",&a,&b,&c);

    MEDIA=(A*a+B*b+C*c)/(A+B+C);

    printf("MEDIA = %0.5lf\n",MEDIA);

    return 0;
}
