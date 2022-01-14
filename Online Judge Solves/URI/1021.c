#include <stdio.h>
int main()
{

int a,b,c,d,e,f,g,h,i,j,k,l;
float n,w,x,y,z,W,X,Y,Z,A,B,C;
scanf("%f",&n);
a= n/100;
w= n-(a*100);
b= w/50;
x= n-(a*100+b*50);
c= x/20;
y= n-(a*100+b*50+c*20);
d= y/10;
z= n-(a*100+b*50+c*20+d*10);
e= z/5;
W= n-(a*100+b*50+c*20+d*10+e*5);
f= W/2;
X= n-(a*100+b*50+c*20+d*10+e*5+f*2);
g= X/1;
Y= n-(a*100+b*50+c*20+d*10+e*5+f*2+g*1);
h= Y/0.50;
Z= n-(a*100+b*50+c*20+d*10+e*5+f*2+g*1+h*0.5);
i= Z/0.25;
A= n-(a*100+b*50+c*20+d*10+e*5+f*2+g*1+h*0.5+i*0.25);
j= A/0.10;
B= n-(a*100+b*50+c*20+d*10+e*5+f*2+g*1+h*0.5+i*0.25+j*0.1);
k= B/0.05;
C= n-(a*100+b*50+c*20+d*10+e*5+f*2+g*1+h*0.5+i*0.25+j*0.1+k*0.05);
l= C/0.01;




printf("NOTES:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("%f\n",w);
    printf("%f\n",x);
    printf("%f\n",y);
    printf("%f\n",z);
    printf("%f\n",W);
    printf("%f\n",X);
    printf("%f\n",Y);



printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);
    printf("%f\n",Z);
    printf("%f\n",A);
    printf("%f\n",B);
    printf("%f\n",C);

return 0;
}
