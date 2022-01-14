#include<stdio.h>
int main()
{
  int W,A,D,C;

        scanf("%d",&W);
        A=W%2;
        D=W/2;
        C=D%2;
        if(A==0 && W!=2)
        {
            printf("YES\n");
        }
        else printf("NO\n");

return 0;

}
