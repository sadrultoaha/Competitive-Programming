#include<stdio.h>
#include<math.h>
int main()
{
    double X1,X2,Y1,Y2,Ans;
    scanf("%lf %lf\n%lf %lf",&X1,&Y1,&X2,&Y2);

      Ans=sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));

      printf("%0.4lf\n",Ans);
      return 0;

}
