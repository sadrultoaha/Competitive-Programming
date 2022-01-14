#include<stdio.h>
int main()
{
int Prdct1,Prdct2,Unit1,Unit2;
float Price1,Price2,PAGAR;
scanf("%d %d %f\n%d %d %f",&Prdct1,&Unit1,&Price1,&Prdct2,&Unit2,&Price2);

PAGAR=(Price1*Unit1)+(Price2*Unit2);

printf("VALOR A PAGAR: R$ %0.2f\n",PAGAR);


return 0;
}
