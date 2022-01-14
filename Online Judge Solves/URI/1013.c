#include<stdio.h>


int main()
{
    int a,b,s,MaiorAB;

    scanf("%d%d%d",&a,&b,&s);

  if(a>b&&a>s){
    MaiorAB=a;
  }
  else if(b>a&&b>s){
    MaiorAB=b;
  }
  else MaiorAB=s;

    printf("%d eh o maior\n",MaiorAB);

    return 0;

}
