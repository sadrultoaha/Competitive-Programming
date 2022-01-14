#include<stdio.h>
int main()
{

    int NUMBER,WHr;
    float SALARY,APHr;
    scanf("%d %d %f",&NUMBER,&WHr,&APHr);

    SALARY=WHr*APHr;

    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",NUMBER,SALARY);

    return 0;
}
