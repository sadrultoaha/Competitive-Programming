#include<stdio.h>

int main()
{
    int CODE,Qnt;
    float PRICE,TOTAL;
    scanf("%d %d",&CODE,&Qnt);
    if(CODE == 1)
    {
        PRICE =4.00 ;
    }
    else if(CODE == 2)
    {
        PRICE =4.50 ;
    }
    else if(CODE == 3)
    {
        PRICE =5.00 ;
    }
    else if(CODE == 4)
    {
        PRICE =2.00 ;
    }
    else if(CODE == 5)
    {
        PRICE =1.50;
    }

    TOTAL = PRICE * Qnt;

    printf("Total: R$ %0.2f\n",TOTAL);

    return 0;
}
