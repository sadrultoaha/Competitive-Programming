#include <stdio.h>
int main()
{


int n,a,b,c,d,e,f,g,w,x,y,z,W,X;
scanf("%d",&n);
a=n/100;
w=n-a*100;
b=w/50;
x=n-(a*100+b*50);
c=x/20;
y=n-(a*100+b*50+c*20);
d=y/10;
z=n-(a*100+b*50+c*20+d*10);
e=z/5;
W=n-(a*100+b*50+c*20+d*10+e*5);
f=W/2;
X=n-(a*100+b*50+c*20+d*10+e*5+f*2);
g=X/1;



printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",b);
    printf("%d nota(s) de R$ 20,00\n",c);
    printf("%d nota(s) de R$ 10,00\n",d);
    printf("%d nota(s) de R$ 5,00\n",e);
    printf("%d nota(s) de R$ 2,00\n",f);
    printf("%d nota(s) de R$ 1,00\n",g);

return 0;
}
