#include<stdio.h>
int main()
{

    double a,b,A=3.5,B=7.5,MEDIA;
    scanf("%lf %lf",&a,&b);

    MEDIA=(A*a+B*b)/(3.5+7.5);

    printf("MEDIA = %0.5lf\n",MEDIA);

    return 0;
}
