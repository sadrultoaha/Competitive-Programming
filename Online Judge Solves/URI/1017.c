#include<stdio.h>

int main()
{
    int T,S;
    float fuel;

    scanf("%d %d",&T,&S);

    fuel=(T*S)/12.0;

    printf("%0.3f\n",fuel);

    return 0;


}
