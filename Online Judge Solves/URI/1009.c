#include<stdio.h>
int main()
{

    char NAME[10];
    double SALARY,SALES,TOTAL,BOUNUS;
    gets(NAME);
    scanf("%lf %lf",&SALARY,&SALES);
    BOUNUS=SALES*0.15;
    TOTAL=SALARY+BOUNUS;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}
